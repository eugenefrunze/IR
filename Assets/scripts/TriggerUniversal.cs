using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerExit : MonoBehaviour
{
    [SerializeField] float delayBeforeDelete = 5f;

    public delegate void ExitAction();
    public static event ExitAction OnChunkExited;

    bool isExited = false;
    
}
