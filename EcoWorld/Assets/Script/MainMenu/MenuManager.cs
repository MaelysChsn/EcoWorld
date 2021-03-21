using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuManager : MonoBehaviour
{
    [SerializeField] GameObject menuEntree;
    [SerializeField] GameObject menuMain;

    void Start()
    {
        menuMain.SetActive(true);
        menuEntree.SetActive(false);
    }

    public void PlaySolo()
    {
        Application.LoadLevel(2);
    }

    // Update is called once per frame
    public void PlayMulti()
    {
        menuEntree.SetActive(true);
        menuMain.SetActive(false);

    }
    public void Exit()
    {
        Application.Quit();
    }
}
