using System;
using System.Collections;
using TMPro;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    //main
    public static GameManager Instance{ set; get; }
    [SerializeField] Player player;
    [SerializeField] PlayerCamera playerCamera;
    
    //UI
    [SerializeField] TMP_Text experienceText;
    [SerializeField] TMP_Text coinsText;
    float experienceAmount;
    int coinsCount;
    //death menu
    [SerializeField] UIDeathMenu deathMenu;
    [SerializeField] GameObject HUD;
    [SerializeField] GameObject startMenu;
    Animator startMenuAnimator;

    //statuses
    public static GameStatus gameStatus;
    PlayerStatus playerStatus;

    void OnEnable(){
        Coin.OnCollected += CoinsUpdate;
        Player.OnDeath += PlayerDeath;
    }

    void OnDisable(){
        Coin.OnCollected -= CoinsUpdate;
        Player.OnDeath -= PlayerDeath;
    }

    void Awake(){
        Instance = this;
        gameStatus = GameStatus.Play;
        UpdateStatistics();
    }

    //temp
    void Start()
    {
        HUD.SetActive(false);
        startMenuAnimator = startMenu.GetComponent<Animator>();
    }
    //--temp

    void Update(){
        //temp shit
        if (Input.GetKeyDown(KeyCode.H))
        {
            StartRun();
        }
        //end temp shit
        ExperienceUpdate();
    }

    public void UpdateStatistics(){
        experienceText.text = experienceAmount.ToString();
        coinsText.text = coinsCount.ToString();
    }

    void CoinsUpdate(){
        coinsCount++;
        coinsText.text = coinsCount.ToString();
    }

    void ExperienceUpdate()
    {
        experienceAmount = player.transform.position.z;
        experienceText.text = experienceAmount.ToString("0");
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
        deathMenu.SetStats(coinsCount, experienceAmount);
    }

    public void RestartButtonPress()
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
}
