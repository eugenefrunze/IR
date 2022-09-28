using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Random = UnityEngine.Random;

public class Chunk : MonoBehaviour, IActivable
{
    [SerializeField] Transform[] coinSpawns;
    [SerializeField] Transform trainSpawn;
    [SerializeField] Transform trapSpawn;
    [SerializeField] GameObject coinPref;
    [SerializeField] GameObject trainPref;
    [SerializeField] GameObject trapPref;
    //graffity
    [SerializeField] bool hasGraffity;
    [SerializeField] GameObject graffityPrefab;
    [SerializeField] Transform[] graffitySpawn;
    //temp
    [SerializeField] List<GameObject> coinsSpawned = new List<GameObject>();
    [SerializeField] List<GameObject> transSpawned = new List<GameObject>();
    //-temp

    public void GenerateItems()
    {
        if (coinSpawns.Length > 0 && coinPref != null){
            foreach (Transform spawn in coinSpawns){
                if (spawn != null){
                    GameObject newCoin = Instantiate(coinPref, spawn.position, Quaternion.identity);
                    newCoin.transform.parent = gameObject.transform;
                    coinsSpawned.Add(newCoin);
                }
            }
        }

        if (trainSpawn != null && trainPref != null){
            GameObject newTrain = Instantiate(trainPref, trainSpawn.position, Quaternion.identity);
            newTrain.transform.parent = gameObject.transform;
            transSpawned.Add(newTrain);
        }

        if (trapSpawn != null && trapPref != null){
            GameObject newTrap = Instantiate(trapPref, trapSpawn.position, Quaternion.identity);
            newTrap.transform.parent = gameObject.transform;
            transSpawned.Add(newTrap);
        }

        if (graffitySpawn.Length > 0 && graffityPrefab != null){
            foreach (Transform spawn in graffitySpawn){
                if (Random.Range(0, 2) == 1){
                    GameObject newGraffity = Instantiate(graffityPrefab, spawn.position, Quaternion.identity);
                    newGraffity.transform.rotation = spawn.rotation;
                    newGraffity.transform.parent = gameObject.transform;
                }
            }
        }
    }
}
