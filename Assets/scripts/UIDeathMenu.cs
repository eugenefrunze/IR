using TMPro;
using UnityEngine;

public class UIDeathMenu : MonoBehaviour{
    //main
    public Animator menuAnimator;
    
    //UI
    [SerializeField] TMP_Text coinsText, experienceText;

    public void SetStats(int coins, float experience){
        coinsText.text = coins.ToString();
        experienceText.text = experience.ToString("0");
    }
}
