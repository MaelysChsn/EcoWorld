using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Photon.Pun;
using UnityEngine.SceneManagement;

public class SettingsManager : MonoBehaviourPunCallbacks
{
    public GameObject inventoryObject;
    public GameObject menuPause;
    public static bool GameIsPaused;

    public void OpenInventory()
    {
        bool isOpen = inventoryObject.activeSelf;
        if (inventoryObject)
        {
            inventoryObject.SetActive(!isOpen);
        }
    }

    public void PauseMenu()
    {
        bool isOpen = menuPause.activeSelf;
        if (menuPause)
        {
            menuPause.SetActive(!isOpen);
            if(isOpen == true)
            {
                Time.timeScale = 0f;
            }
            else
            {
                Time.timeScale = 1.0f;
            }
        }
    }

    public void ExitRoom()
    {
        Debug.Log("A quitter la partie");
    }

    public void ExitGame()
    {
        Application.Quit();
    }
}
