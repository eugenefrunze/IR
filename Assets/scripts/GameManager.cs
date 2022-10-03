using System;
using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.Serialization;
using Random = UnityEngine.Random;

public class GameManager : MonoBehaviour
{
    Renderer _renderer;
    public static GameManager Instance{ set; get; }
    [SerializeField] Player player;
    [SerializeField] PlayerCamera playerCamera;
    
    //UI
    [SerializeField] TMP_Text experienceText;
    [SerializeField] TMP_Text coinsText;
    [SerializeField] TMP_Text spentText;
    float rawExperience;
    int coinsCount;
    //death menu
    [SerializeField] UIDeathMenu deathMenu;
    [SerializeField] GameObject HUD;
    [SerializeField] GameObject startMenu;
    Animator startMenuAnimator;

    //statuses
    public static GameStatus gameStatus;
    PlayerStatus playerStatus;
    [SerializeField] PeriodType periodType = PeriodType.Commercial;
    
    //achievements
    [SerializeField] Ranks playerRank = Ranks.Intern;
    [SerializeField] Grades playerGrade = Grades.Technician;
    [SerializeField] int rankDistMultiplier = 1000;
    int nextRankThreshold;
    

    void OnEnable(){
        Coin.OnCollected += CoinsUpdate;
        Player.OnDeath += PlayerDeath;
        Player.OnManuallyRestart += RestartGame;
    }

    void OnDisable(){
        Coin.OnCollected -= CoinsUpdate;
        Player.OnDeath -= PlayerDeath;
        Player.OnManuallyRestart -= RestartGame;
    }

    void Awake(){
        Instance = this;
        UpdateStatistics();
    }

    void Start(){
        GameParamsInit();
        CalculateNextRankThresh();
        //make invisible
        GetComponent<Renderer>().enabled = false;

    }

    void Update(){
        //temp shit
        if (Input.GetKeyDown(KeyCode.H))
        {
            StartRun();
        }
        //end temp shit
        CalculateRank();
        ExperienceUpdate(rawExperience);
    }

    void GameParamsInit(){
        //set the hud off bec in the lobby
        HUD.SetActive(false);
        gameStatus = GameStatus.Play;
        startMenuAnimator = startMenu.GetComponent<Animator>();
    }

    public void UpdateStatistics(){
        experienceText.text = rawExperience.ToString();
        coinsText.text = coinsCount.ToString();
    }

    void CoinsUpdate(){
        coinsCount++;
        coinsText.text = coinsCount.ToString();
    }

    void CalculateRank(){
        rawExperience = player.transform.position.z;
        if (rawExperience > nextRankThreshold){
            playerRank++;
            CalculateNextRankThresh();
        }
    }
    
    void CalculateNextRankThresh(){
        nextRankThreshold = ((int) playerRank + 1) * rankDistMultiplier;
    }

    void ExperienceUpdate(float experience)
    {
        experienceText.text = playerRank.ToString();
        spentText.text = experience.ToString("0");
    }

    void PlayerDeath() 
    {
        gameStatus = GameStatus.Stopped;
        Debug.Log("YOURE DEAD");
        //temp
        HUD.SetActive(false);
        startMenu.SetActive(false);
        //--temp
        deathMenu.menuAnimator.SetTrigger("death");
        playerStatus = PlayerStatus.Dead;
        deathMenu.SetStats(coinsCount, rawExperience);
    }

    public void RestartButtonPress()
    {
        RestartGame();
    }

    public void RestartGame()
    {
        UnityEngine.SceneManagement.SceneManager.LoadScene("main_scene");
        //temp
        HUD.SetActive(false);
        player.isGameStarted = true;
        playerCamera.isMoving = true;
        //--temp
    }

    public void StartRun()
    {
        gameStatus = GameStatus.Run;
        //temp
        player.isGameStarted = true;
        playerCamera.isMoving = true;
        player.animator.SetTrigger("start");
        startMenuAnimator.SetTrigger("start");
        HUD.SetActive(true);
        //--temp
    }

    IEnumerator MusicMuter(AudioSource music)
    {
        while (music.volume > 0)
        {
            music.volume -= Time.deltaTime;
            yield return null;
        }
    }
}
