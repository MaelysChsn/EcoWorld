using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Pun;

public class PhotonManager : MonoBehaviourPun
{
    [SerializeField] GameObject[] SpawnPoints;
    [SerializeField] GameObject[] character;
    public int clientCharacter;

    public GameObject BeginPanel;

    PlayerFollow playerFollow;
    CameraMiniMap playerMinimap;

    // Start is called before the first frame update
    void Awake()
    {
        playerFollow = FindObjectOfType<PlayerFollow>();
        playerMinimap = FindObjectOfType<CameraMiniMap>();
        if (PhotonNetwork.IsConnected)
        {
            SpawnPlayer();
            BeginPanel.SetActive(true);
        }
    }

    public void SpawnPlayer()
    {
        int masterCharacter = PlayerPrefs.GetInt("masterCharacter");
        int player = 0;

        if (PhotonNetwork.CurrentRoom.PlayerCount == 2)
        {
            
            if (!PhotonNetwork.IsMasterClient)
            {
                player = 1;
            }

            switch (masterCharacter)
            {
                case 1:
                    clientCharacter = 0;
                    break;
                case 0:
                    clientCharacter = 1;
                    break;
                default:
                    break;
            }


            GameObject masterprefab = character[masterCharacter];
            GameObject clientprefab = character[clientCharacter];
            //choix des avatar
            if (player == 1)
            {
                GameObject Player = PhotonNetwork.Instantiate(clientprefab.name, SpawnPoints[player].transform.position, Quaternion.identity);
                playerFollow.SetCameraTarget(Player.transform);
                playerMinimap.SetMiniMapTarget(Player.transform);
            }
            else
            {
                GameObject Player = PhotonNetwork.Instantiate(masterprefab.name, SpawnPoints[player].transform.position, Quaternion.identity);
                playerFollow.SetCameraTarget(Player.transform);
                playerMinimap.SetMiniMapTarget(Player.transform);

            }
        }
        else if (PhotonNetwork.CurrentRoom.PlayerCount == 1)
        {
            GameObject masterprefab = character[masterCharacter];
            GameObject Player = PhotonNetwork.Instantiate(masterprefab.name, SpawnPoints[player].transform.position, Quaternion.identity);
            playerFollow.SetCameraTarget(Player.transform);
            playerMinimap.SetMiniMapTarget(Player.transform);
        }
        


    }

}
