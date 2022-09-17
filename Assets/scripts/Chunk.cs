using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Serialization;

public class Chunk : MonoBehaviour, IActivable
{
    [SerializeField] Transform[] coinSpawns;
    [SerializeField] Transform trainSpawn;
    [SerializeField] Transform trapSpawn;
    [SerializeField] GameObject coinPref;
    [SerializeField] GameObject trainPref;
    [SerializeField] GameObject trapPref;
    public void GenerateItems()
    {
        if (coinSpawns.Length > 0 && coinPref != null){
            foreach (Transform spawn in coinSpawns){
                if (spawn != null)
                    Instantiate(coinPref, spawn.position, Quaternion.identity);
            }
        }
        if (trainSpawn != null && trainPref != null)
            Instantiate(trainPref, trainSpawn.position, Quaternion.identity);
        if (trapSpawn != null && trapPref != null)
            Instantiate(trapPref, trapSpawn.position, Quaternion.identity);
    }
}
