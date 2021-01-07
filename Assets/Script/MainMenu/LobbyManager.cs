using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Photon.Realtime;
using Photon.Pun;
using TMPro;
using System.Linq;

public class LobbyManager : MonoBehaviourPunCallbacks//extension de la classe monobehaviour avec photon pun pour avoir accès au "callbacks" pour lea créations de rooms, le lobbies d'attentes ...
{


    [SerializeField] GameObject findRoomButton;
    [SerializeField] GameObject searchingPanel;
    [SerializeField] GameObject menuEntree;
    [SerializeField] GameObject menuMain;
    [SerializeField] GameObject buttonExit;
    [SerializeField] GameObject menuCharacterSelector;
    
    [SerializeField] GameObject menuChargement;



    void Start()
    {
        findRoomButton.SetActive(false);
        searchingPanel.SetActive(false);
        PhotonNetwork.ConnectUsingSettings(); //permet de se connecter au server e photon avec la clé ID

    }
    public override void OnConnectedToMaster()// "callback" appelé par Photon lorsque que l'on est bien connecté au server principal
    {
        Debug.Log("Vous êtes connecter au Server " + PhotonNetwork.CloudRegion + " Photon");
        PhotonNetwork.AutomaticallySyncScene = true;
        findRoomButton.SetActive(true);
    }

    public void OnFindRoom()
    {
        searchingPanel.SetActive(true);
        findRoomButton.SetActive(false);
        buttonExit.SetActive(false);


        PhotonNetwork.JoinRandomRoom();
    }

    public override void OnJoinRandomFailed(short returnCode, string message)
    {
        Debug.Log("La recherche de partie a échoué. Creation d'une nouvelle partie !");
        CreateRoom();
    }

    void CreateRoom()
    {
        int randomRoomName = Random.Range(0, 100000);
        RoomOptions roomOptions = new RoomOptions() {
            IsVisible = true,
            IsOpen = true,
            MaxPlayers = 2
        };
        PhotonNetwork.CreateRoom("Partie" + randomRoomName, roomOptions);
        Debug.Log("Partie crée ! Nous attendons un autre joueur");
    }

    public override void OnCreateRoomFailed(short returnCode, string message)
    {
        Debug.Log("La création de partie a échoué. Il doit déjà y avoir de partie avec le même nom.");
        CreateRoom();
    }

    public override void OnPlayerEnteredRoom(Player newPlayer)
    {
        menuEntree.SetActive(false);
        searchingPanel.SetActive(false);

        if (PhotonNetwork.CurrentRoom.PlayerCount == 2)
        {
            if (PhotonNetwork.IsMasterClient == true)
            {
                menuChargement.SetActive(false);
                menuCharacterSelector.SetActive(true);
                Debug.Log(PhotonNetwork.CurrentRoom.PlayerCount + "/2 Début de la partie");

            }
            else if (PhotonNetwork.IsMasterClient == false)
            {
                menuChargement.SetActive(true);
                menuCharacterSelector.SetActive(false);
            }
        }
        
    }

    public void ExitRoom()
    {
        searchingPanel.SetActive(false);
        findRoomButton.SetActive(true);
        buttonExit.SetActive(true);
        PhotonNetwork.LeaveRoom();
        Debug.Log("vous avez quitter la partie");
    }

    public void ExitMulti()
    {
        searchingPanel.SetActive(false);
        menuEntree.SetActive(false);
        menuMain.SetActive(true);

    }

}

