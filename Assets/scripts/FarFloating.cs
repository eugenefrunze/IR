using UnityEngine;
using UnityEngine.SceneManagement;

[RequireComponent(typeof(Camera))]
public class FarFloating : MonoBehaviour
{
    [SerializeField] float limit = 200.0f;
    [SerializeField] ChunkManager chunkManager;

    void LateUpdate()
    {
        Vector3 cameraPosition = gameObject.transform.position;
        cameraPosition.y = 0;

        if (cameraPosition.magnitude > limit) {
            for (int i = 0; i < SceneManager.sceneCount; i++) {
                foreach (GameObject obj in SceneManager.GetSceneAt(i).GetRootGameObjects()) {
                    obj.transform.position -= new Vector3(0, 0, cameraPosition.z);
                }
            }

            Vector3 globalDelta = Vector3.zero - cameraPosition;
            chunkManager.currOffset += cameraPosition.z;
        }
    }
}
