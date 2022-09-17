using UnityEngine;

public class Obstacle : MonoBehaviour{
    public delegate void CollideAction();

    public static event CollideAction OnCollided;
    void OnTriggerEnter(Collider other){
        if (OnCollided != null) OnCollided();
    }
}
