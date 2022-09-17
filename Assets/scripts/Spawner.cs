using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour, IActivable
{
    [SerializeField] List<TargetObject> objectsToSpawn;
    //
    // void Activation()
    // {
    //     Debug.Log("Spawner: Spawner Activation() has ran");
    // }
    //
    // void Spawn()
    // {
    //     StartCoroutine(SpawnRoutine());
    // }
    //
    // IEnumerator SpawnRoutine(Vector3 location)
    // {
    //     foreach (GameObject obj in objsToSpawn)
    //     {
    //         Instantiate(obj, location, Quaternion.identity);
    //     }
    // }
}
