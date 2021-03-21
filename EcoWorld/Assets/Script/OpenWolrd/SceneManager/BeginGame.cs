using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class BeginGame : MonoBehaviour
{
    [TextArea(3, 10)]
    public List<string> dialogueB;

    public GameObject dialoguePanel;

    public MonoBehaviour[] stuffToDisable;

    public List<string> dialogueLines = new List<string>();

    public Button continueButton;
    public TMP_Text dialogueText;
    int dialogueIndex;

    void Awake()
    {
        continueButton.onClick.AddListener(delegate { ContinueDialogue(); });
    }

    public void Start()
    {
        setBeginDialogue();
    }

    //Création des dialogue  de début de jeu
    public void setBeginDialogue()
    {
        if (dialogueB.Count != 0)
        {
            AddNewDialogue(dialogueB);
        }
    }

    //ajout des lignes de dialogues
    public void AddNewDialogue(List<string> lines)
    {
        dialogueIndex = 0;
        dialogueLines = new List<string>(4);
        dialogueLines.AddRange(lines);

        foreach (string line in lines)
        {
            dialogueLines.Add(line);
        }
        CreateDialogue();

        foreach (MonoBehaviour obj in stuffToDisable)
        {
            obj.enabled = false;
        }
    }

    //création des dialogues et affichage dans le canvas
    public void CreateDialogue()
    {
        dialogueText.text = dialogueLines[dialogueIndex];
    }

    //enchainement des dialogue par actions de l'utilisateurs
    public void ContinueDialogue()
    {
        if (dialogueIndex < dialogueLines.Count - 1)
        {
            dialogueIndex++;
            dialogueText.text = dialogueLines[dialogueIndex];
            StopAllCoroutines();
            StartCoroutine(TypeConversation(dialogueText.text));

        }
        else
        {
            dialoguePanel.SetActive(false);
            foreach (MonoBehaviour obj in stuffToDisable)
            {
                obj.enabled = true;
            }
        }
    }

    IEnumerator TypeConversation(string lines)
    {
        dialogueText.text = "";
        foreach (char lettre in lines.ToCharArray())
        {
            dialogueText.text += lettre;
            yield return null;
        }
    }


}
