using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerFollow : MonoBehaviour
{
    public Transform target;
    public Vector3 _cameraOffset;
    [Range(0.01f, 1.0f)]

    public float SmoothFactor = 0.5f;

    public void SetCameraTarget(Transform playerTransform)
    {
        target = playerTransform;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        Vector3 newPosition = target.position + _cameraOffset;
        transform.position = Vector3.Slerp(transform.position, newPosition, SmoothFactor);
        
    }
}
