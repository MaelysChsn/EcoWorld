using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using Photon.Pun;

public class CharacterManager : MonoBehaviour
{
    public GameObject[] characters;
    public int masterCharacter = 0;
    public void NextChoice()
    {
        characters[masterCharacter].SetActive(false);
        masterCharacter = (masterCharacter + 1) % characters.Length;
        characters[masterCharacter].SetActive(true);
    }
    public void PreviousChoice()
    {
        characters[masterCharacter].SetActive(false);
        masterCharacter--;
        if(masterCharacter < 0)
        {
            masterCharacter += characters.Length;
        }
        characters[masterCharacter].SetActive(true);
        
    }

    public void GameStart()
    {

        PlayerPrefs.SetInt("masterCharacter", masterCharacter);
        Debug.Log("joueur selectionnée master :" + masterCharacter);

        PhotonNetwork.LoadLevel("OpenWorld");
    }
}
