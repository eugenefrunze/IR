using System;
using System.Collections;
using UnityEngine;
using UnityEngine.Serialization;

public class TriggerExitWaterplane : MonoBehaviour
{
    //temp
    [FormerlySerializedAs("waterplane")] [FormerlySerializedAs("selfWaterPlane")] [SerializeField] Waterplane waterPlane;
    [SerializeField] GameObject selfWaterPlane;

    void OnTriggerExit(Collider other)
    {
        waterPlane.GenerateNextStep();
        Destroy(selfWaterPlane);
    }

    void Start()
    {
        GetComponent<Renderer>().enabled = false;
    }
}
