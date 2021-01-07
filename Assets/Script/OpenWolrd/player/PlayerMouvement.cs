using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PlayerMouvement : MonoBehaviourPun
{
    private Rigidbody player;
    public float moveSpeed = 10.0f;

    private FixedJoystick joystick;

    void Awake()
    {
        player = GetComponent<Rigidbody>();
        joystick = GameObject.FindWithTag("Joystick").GetComponent<FixedJoystick>();

    }

    void Start()
    {
        if (!photonView.IsMine)
        {
            Destroy(GetComponent<PlayerMouvement>());
        }
    }

    // Update is called once per frame
    void Update()
    {
        player.velocity = new Vector3(joystick.Horizontal * moveSpeed, player.velocity.y, joystick.Vertical * moveSpeed);
        if(joystick.Horizontal !=0f || joystick.Vertical != 0f)
        {
            transform.rotation = Quaternion.LookRotation(player.velocity);
        }
    }

}
