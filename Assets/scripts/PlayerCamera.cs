using UnityEngine;
using UnityEngine.Serialization;

public class PlayerCamera : MonoBehaviour{
    [SerializeField] Transform lookTarget;
    [SerializeField] Vector3 offset = new Vector3(0, 2, -4.5f);
    [SerializeField] Vector3 rotation = new Vector3(10, 0, 0);
    [SerializeField] bool followX;

    [SerializeField] float initialRotationSpeed = 1f;
    [SerializeField] GameObject player;
    //temp
    public bool isMoving;
    //--temp

     void LateUpdate()
     {
         if(isMoving)
         {
             Vector3 targetPosition = lookTarget.position + offset;
             if(!followX) targetPosition.x = 0; transform.position = Vector3.Lerp(transform.position, targetPosition, .02f);
             transform.rotation = Quaternion.Lerp(transform.rotation, Quaternion.Euler(rotation), 0.06f); 
         }
         else
         {
             transform.RotateAround(player.transform.position, Vector3.up, Time.deltaTime * initialRotationSpeed);
         }

         
         
     }
}
