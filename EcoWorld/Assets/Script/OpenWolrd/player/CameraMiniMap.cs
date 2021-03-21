using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMiniMap : MonoBehaviour
{
    public Transform Player;

    public void SetMiniMapTarget(Transform playerTransform)
    {
        Player = playerTransform;
    }

    private void LateUpdate()
    {
        Vector3 CameraFollowPlayer = Player.position;
        CameraFollowPlayer.y = transform.position.y;
        transform.position = CameraFollowPlayer;
    }
}
