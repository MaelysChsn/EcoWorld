using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Auth;
using TMPro;
using UnityEngine.SceneManagement;

public class AuthManager : MonoBehaviour
{
    [SerializeField] GameObject menuLogin;
    [SerializeField] GameObject menuSignIn;


    //Firebase variable
    [Header("Firebase")]
    public DependencyStatus dependencyStatus;
    public FirebaseAuth auth;
    public FirebaseUser user;

    //Login Variable
    [Header("Login")]
    public TMP_InputField emailFieldLogin;
    public TMP_InputField pwdFieldLogin;
    public TMP_Text errorTextLogin;
    public TMP_Text confirmationTextLogin;

    //SignIn Variable
    [Header("SignIn")]
    public TMP_InputField pseudoFieldSignIn;
    public TMP_InputField emailFieldSignIn;
    public TMP_InputField pwdFieldSignIn;
    public TMP_InputField pwdVerifFieldSignIn;
    public TMP_Text confirmationTextSignIn;
    public TMP_Text errorTextSignIn;

    private void Awake()
    {
        FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task =>
        {

            dependencyStatus = task.Result;
            if (dependencyStatus == DependencyStatus.Available)
            {
                InitializeFirebase();
            }
            else
            {
                Debug.LogError("Could not resolve all Firebase dependencies: " + dependencyStatus);
            }
        });
    }

    private void InitializeFirebase()
    {
        Debug.Log("Setting up Firebase Auth");

        auth = FirebaseAuth.DefaultInstance;
    }

    public void LoginButton()
    {
        StartCoroutine(Login(emailFieldLogin.text, pwdFieldLogin.text));
    }

    public void SignInButton()
    {
        StartCoroutine(Register(emailFieldSignIn.text, pwdFieldSignIn.text, pseudoFieldSignIn.text));
    }

    //public void ForgetButton()
    //{
    //    Forget(emailFieldSignIn.text));
    //}

    private IEnumerator Login(string _email, string _password)
    {
        FirebaseUser user = auth.CurrentUser;

        //Call the Firebase auth signin function passing the email and password
        var LoginTask = auth.SignInWithEmailAndPasswordAsync(_email, _password);
        //Wait until the task completes
        yield return new WaitUntil(predicate: () => LoginTask.IsCompleted);

        if (LoginTask.Exception != null)
        {
            //If there are errors handle them
            Debug.LogWarning(message: $"Failed to register task with {LoginTask.Exception}");
            FirebaseException firebaseEx = LoginTask.Exception.GetBaseException() as FirebaseException;
            AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

            string message = "Identification impossible!";
            switch (errorCode)
            {
                case AuthError.MissingEmail:
                    message = "Email manquant";
                    break;
                case AuthError.MissingPassword:
                    message = "Mot de passe manquant";
                    break;
                case AuthError.WrongPassword:
                    message = "Mot de passe incorrect";
                    break;
                case AuthError.InvalidEmail:
                    message = "Email incorrect";
                    break;
                case AuthError.UserNotFound:
                    message = "Ce compte n'existe pas !";
                    break;
            }
            errorTextLogin.text = message;
        }
        else if(user.IsEmailVerified)
        {
            user = LoginTask.Result;
            Debug.LogFormat("L'utilisateur est connecter: {0} ({1})", user.DisplayName, user.Email);
            errorTextLogin.text = "";
            confirmationTextLogin.text = "Vous êtes connecté";
            SceneManager.LoadScene("Menu");
        }
        else
        {
            errorTextLogin.text = "Vous n'avez pas encore activé votre compte avec le mail que nous vous avons envoyé !";
        }
    }

    private IEnumerator Register(string _email, string _password, string _pseudo)
    {
        if (_pseudo == "")
        {
            //If the username field is blank show a warning
            errorTextSignIn.text = "";
        }
        else if (pwdFieldSignIn.text != pwdVerifFieldSignIn.text)
        {
            //If the password does not match show a warning
            errorTextSignIn.text = "Votre mot de passe ne correspond pas !";
        }
        else
        {
            //Call the Firebase auth signin function passing the email and password
            var RegisterTask = auth.CreateUserWithEmailAndPasswordAsync(_email, _password);
            //Wait until the task completes
            yield return new WaitUntil(predicate: () => RegisterTask.IsCompleted);

            if (RegisterTask.Exception != null)
            {
                //If there are errors handle them
                Debug.LogWarning(message: $"Problème pour s'enregistrer {RegisterTask.Exception}");
                FirebaseException firebaseEx = RegisterTask.Exception.GetBaseException() as FirebaseException;
                AuthError errorCode = (AuthError)firebaseEx.ErrorCode;

                string message = "Register Failed!";
                switch (errorCode)
                {
                    case AuthError.MissingEmail:
                        message = "Email manquant";
                        break;
                    case AuthError.MissingPassword:
                        message = "Mot de passe manquant";
                        break;
                    case AuthError.WeakPassword:
                        message = "Mot de passe faible";
                        break;
                    case AuthError.EmailAlreadyInUse:
                        message = "Cet email est déjà utilser";
                        break;
                }
                errorTextSignIn.text = message;
            }
            else
            {
                FirebaseUser user = auth.CurrentUser;
                if (user != null)
                {
                    user.SendEmailVerificationAsync().ContinueWith(task => {
                        if (task.IsCanceled)
                        {
                            Debug.LogError("L'envoie du mail de vérification a échoué ");
                            return;
                        }
                        if (task.IsFaulted)
                        {
                            Debug.LogError("L'envoie du l'email de vérification a rencontré un problème: " + task.Exception);
                            return;
                        }
                 

                        Debug.Log("L'email de vérifiaction a été envoyé !");
                    });
                    //User has now been created
                    //Now get the result
                    user = RegisterTask.Result;


                    //Create a user profile and set the username
                    UserProfile profile = new UserProfile { DisplayName = _pseudo };

                    //Call the Firebase auth update user profile function passing the profile with the username
                    var ProfileTask = user.UpdateUserProfileAsync(profile);
                    //Wait until the task completes
                    yield return new WaitUntil(predicate: () => ProfileTask.IsCompleted);

                    if (ProfileTask.Exception != null)
                    {
                        //If there are errors handle them
                        Debug.LogWarning(message: $"Problème pour s'enregistrer {ProfileTask.Exception}");
                        FirebaseException firebaseEx = ProfileTask.Exception.GetBaseException() as FirebaseException;
                        AuthError errorCode = (AuthError)firebaseEx.ErrorCode;
                        errorTextSignIn.text = "L'attribution du pseudo a échoué!";
                    }
                    else
                    {
                        //Username is now set
                        //Now return to login screen
                        menuLogin.SetActive(true);
                        menuSignIn.SetActive(false);
                        errorTextSignIn.text = "";
                    }
                }

            }
               
        }
    }

}

    //private IEnumerable Forget(string _email)
    //{
    //    string emailAddress = _email;
    //    if (user != null)
    //    {
    //        auth.SendPasswordResetEmailAsync(emailAddress).ContinueWith(task => {
    //            if (task.IsCanceled)
    //            {
    //                Debug.LogError("L'envoie du mail de réinitialisation a échoué.");
    //                return;
    //            }
    //            if (task.IsFaulted)
    //            {
    //                Debug.LogError("L'envoie du mail de réinitialisation a rencontré un problème: " + task.Exception);
    //                return;
    //            }

    //            Debug.Log("L'e-mail de réinitialisation du mot de passe a été envoyé.");
    //        });
    //    }
    //}


