using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class AuthentificationMenu: MonoBehaviour
{
    [SerializeField] GameObject menuWelcome;
    [SerializeField] GameObject menuLogin;
    [SerializeField] GameObject menuSignIn;

    // Start is called before the first frame update
    void Start()
    {
        menuWelcome.SetActive(true);
        menuLogin.SetActive(false);
        menuSignIn.SetActive(false);
    }

    public void MenuLogin()
    {
        menuLogin.SetActive(true);
        menuWelcome.SetActive(false);
    }

    public void MenuSignIn()
    {
        menuSignIn.SetActive(true);
        menuWelcome.SetActive(false);
    }
}
