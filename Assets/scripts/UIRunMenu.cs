using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIRunMenu : MonoBehaviour
{
    //temp
    [SerializeField] GameObject panel;
    //--temp
    public void SetPanelActive()
    {
        panel.SetActive(false);
    }
}
