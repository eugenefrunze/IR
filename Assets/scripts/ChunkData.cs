using UnityEngine;

[CreateAssetMenu(menuName = "ChunkData")]
public class ChunkData : ScriptableObject
{
    public float length;
    public GameObject chunkPrefab;
    public ChunkType chucnkType = ChunkType.Road;
    public ChunkPosition chunkPos = ChunkPosition.InBetween;
}