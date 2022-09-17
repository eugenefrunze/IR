using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class ChunkManager : MonoBehaviour
{
    [SerializeField] ChunkData[] chunksData;
    [SerializeField] ChunkData firstChunk;
    [SerializeField] int initialSize = 10;
    [SerializeField] Vector3 spawnOrig = new Vector3(0, 0, 0);
    //temp
    [SerializeField] float initialOffset = 0f;
    //--temp
    int currRandom;
    float currOffset;

    void GenerateInit(){
        for (int i = 0; i < initialSize; i++){
            GenerateChunk();
        }
    // temp
        StartCoroutine(CycleGenerate(2f));
    // -- temp
    }
    
    // temp
    IEnumerator CycleGenerate(float delay){
        GenerateChunk();
        yield return new WaitForSeconds(delay);
        StartCoroutine(CycleGenerate(delay));
    }
    // -- temp
    void GenerateChunk(){
        currRandom = Random.Range(0, chunksData.Length);
        GameObject newChunk = Instantiate(chunksData[currRandom].chunkPrefab, new Vector3(0, 0, currOffset), Quaternion.Euler(0, 180, 0));
        currOffset += chunksData[currRandom].length;
        // temp
        Chunk chcom = newChunk.GetComponent<Chunk>();
        if (chcom != null){
            chcom.GenerateItems();
        }
        //--temp
    }

    void Start(){
        if (initialOffset > 0){
            currOffset += initialOffset;
        }
        GenerateInit();
    }
}
