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

    //statuses
    GameStatus gameStatus;
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
        UpdateStatistics();
    }

    void Update(){
        //temp shit
        if (Input.GetKeyDown(KeyCode.H)){
            player.isGameStarted = true;
            playerCamera.isMoving = true;
            player.animator.SetTrigger("start");
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

    void ExperienceUpdate(){
        experienceAmount += Time.deltaTime * player.runSpeed;
        experienceText.text = experienceAmount.ToString("0");
    }

    void PlayerDeath(){
        Debug.Log("YOURE DEAD");
        deathMenu.menuAnimator.SetTrigger("death");
        playerStatus = PlayerStatus.Dead;
        deathMenu.SetStats(coinsCount, experienceAmount);
    }

    public void RestartButtonPress(){
        UnityEngine.SceneManagement.SceneManager.LoadScene("main_scene");
        //temp
        player.isGameStarted = true;
        playerCamera.isMoving = true;
        //--temp
    }
}
