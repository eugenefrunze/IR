using UnityEngine;
using UnityEngine.Serialization;

public class PlayerCamera : MonoBehaviour{
    [SerializeField] Transform lookTarget;
    [SerializeField] Vector3 offset = new Vector3(0, 2, -4.5f);
    [SerializeField] Vector3 rotation = new Vector3(10, 0, 0);
    [SerializeField] bool followX;
    //temp
    public bool isMoving;
    //--temp

     void LateUpdate(){
         //temp
         if(!isMoving) return;
         //--temp
         Vector3 targetPostion = lookTarget.position + offset;
         if(!followX) targetPostion.x = 0;
         transform.position = Vector3.Lerp(transform.position, targetPostion, .02f);
         transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(rotation), .02f);
     }
}
