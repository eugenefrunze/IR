using System.Collections;
using UnityEngine;
using Random = UnityEngine.Random;

public class ChunkManager : MonoBehaviour
{
    //chunks handling
    [SerializeField] ChunkData[] chunksData;
    [SerializeField] ChunkData firstChunk;
    [SerializeField] int initialSize = 10;
    [SerializeField] Vector3 spawnOrig = new Vector3(0, 0, 0);
    [SerializeField] ChunkData previousChunkData;
    [SerializeField] ChunkData currentChunkData;
    //temp
    [SerializeField] float initialOffset = 0f;
    [SerializeField] float delayBeforeChunkDestroy = 2f;

    Coroutine cycleGenerate;
    //--temp
    int currRandom;
    public float currOffset;

    void OnEnable()
    {
        TriggerChunkExit.OnChunkExited += DestroyExitedChunk;
    }

    void OnDisable()
    {
        TriggerChunkExit.OnChunkExited -= DestroyExitedChunk;
    }
    
    void Start()
    {
        if (initialOffset > 0) currOffset += initialOffset;
        GenerateInit();
        cycleGenerate = StartCoroutine(CycleGenerate(2f));
        //make entity invisible
        GetComponent<Renderer>().enabled = false;
    }

    void GenerateInit()
    {
        for (int i = 0; i < initialSize; i++)
        {
            GenerateChunk();
        }
    }
    
    // temp
    IEnumerator CycleGenerate(float delay)
    {
        if (GameManager.gameStatus == GameStatus.Stopped) {
            StopCoroutine(cycleGenerate);
            yield break;
        }
        GenerateChunk();
        yield return new WaitForSeconds(delay);
        StartCoroutine(CycleGenerate(delay));
    }

    void GenerateChunk()
    {
        currRandom = Random.Range(0, chunksData.Length);
        currentChunkData = chunksData[currRandom];
        
        GameObject newChunk = Instantiate(currentChunkData.chunkPrefab, new Vector3(0, 0, currOffset), Quaternion.Euler(0, 180, 0));
        currOffset += currentChunkData.length;
        // temp
        Chunk chcom = newChunk.GetComponent<Chunk>();
        if (chcom != null){
            chcom.GenerateItems();
        }
        //--temp
    }

    
    //temp
    public void DestroyExitedChunk(GameObject chunk)
    {
        StartCoroutine(ChunkDespawn(chunk, delayBeforeChunkDestroy));
    }

    IEnumerator ChunkDespawn(GameObject chunk, float delay)
    {
        yield return new WaitForSeconds(delay);
        Destroy(chunk);
    }
    //==temp
}
