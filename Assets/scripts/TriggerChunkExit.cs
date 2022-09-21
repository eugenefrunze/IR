using UnityEngine;

public class TriggerChunkExit : MonoBehaviour
{
    //temp
    [SerializeField] GameObject selfChunk;
    //--temp

    public delegate void ExitAction(GameObject chunk);
    public static event ExitAction OnChunkExited;

    void OnTriggerExit(Collider other)
    {
        if (OnChunkExited != null) OnChunkExited(selfChunk);
    }
}
