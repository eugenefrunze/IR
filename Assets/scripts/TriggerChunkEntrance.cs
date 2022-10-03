using System;
using UnityEngine;

public class TriggerChunkEntrance : MonoBehaviour
{
    public delegate void EntranceAction();
    public static event EntranceAction OnEnter;

    void OnTriggerEnter(Collider other)
    {
        if (OnEnter != null) OnEnter();
    }

    void Start()
    {
        GetComponent<Renderer>().enabled = false;
    }
}
