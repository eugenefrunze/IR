using System;
using System.Collections;
using UnityEngine;

public class Coin : MonoBehaviour{
    //temp
    [SerializeField] AudioSource collectSound;
    [SerializeField] MeshRenderer meshRenderer;
    //end temp
    public delegate void CollectAction();
    public static event CollectAction OnCollected;

    void OnTriggerEnter(Collider other){
        StartCoroutine(Collect(1));
        if (OnCollected != null) OnCollected();
    }

    IEnumerator Collect(float delayBefDelete){
        collectSound.Play();
        meshRenderer.enabled = false;
        yield return new WaitForSeconds(delayBefDelete);
        gameObject.SetActive(false);
        // Destroy(gameObject);
    }
    //--temp
}
