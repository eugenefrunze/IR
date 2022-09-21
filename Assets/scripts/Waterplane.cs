using System.Collections;
using UnityEngine;

public class Waterplane : MonoBehaviour
{
    [SerializeField] Transform[] towerSpawns;
    [SerializeField] GameObject towerPrefab;
    public static float currWaterplaneOffset = 800;
    [SerializeField] GameObject waterplanePrefab;

    public void GenerateEnvObjects(){
        foreach (Transform spawn in towerSpawns){
            if (spawn != null){
                GameObject newTower = Instantiate(towerPrefab, spawn.position, Quaternion.Euler(-90, 0, 0));
                newTower.transform.rotation = spawn.rotation;
                newTower.transform.parent = gameObject.transform;
            }
        }
    }
    
    public void GenerateNextStep()
    {        
        GameObject newWaterPlane = Instantiate(waterplanePrefab, new Vector3(0, -9.2f, currWaterplaneOffset), Quaternion.Euler(0, 0, 0)); 
        currWaterplaneOffset += 400;
        Waterplane newWp = newWaterPlane.GetComponent<Waterplane>();
        if(newWp != null) newWp.GenerateEnvObjects();
    }
}
