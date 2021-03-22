﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Cinemachine;

public class DialogueManager : MonoBehaviour
{
    public static DialogueManager Instance { get; set; }
    public GameObject dialoguePanel;

    public GameObject DialogueCamera;
    public Camera MainCamera;

    public MonoBehaviour[] stuffToDisable;
    public string npcName;
    public GameObject npc;
    public GameObject player;

    public List<string> dialogueLines = new List<string>();

    public Button continueButton;
    public TMP_Text dialogueText, nameText;
    int dialogueIndex;

    public CinemachineTargetGroup targetGroup;


    void Awake()
    {
        targetGroup = targetGroup.GetComponent<CinemachineTargetGroup>();

        continueButton.onClick.AddListener(delegate { ContinueDialogue(player); });
        dialoguePanel.SetActive(false);

        if (Instance != null && Instance != this)
        {
            Destroy(gameObject);
        }
        else
        {
            Instance = this;
        }
    }

    private void Start()
    {
        MainCamera = MainCamera.GetComponent<Camera>();
    }

    //ajout des lignes de dialogues
    public void AddNewDialogue(List<string> lines, string npcName)
    {
        dialogueIndex = 0;
        dialogueLines = new List<string>();
        dialogueLines.AddRange(lines);
        this.npcName = npcName;

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
        nameText.text = npcName;
        dialoguePanel.SetActive(true);
    }

    //définition de la position de la caméra de dialogue
    public void CameraPlayer(GameObject npc, GameObject player)
    {
        this.npc = npc;
        this.player = player;
        DialogueCamera.SetActive(true);

        DialogueCamera.GetComponent<CinemachineVirtualCamera>().LookAt = npc.transform;
        DialogueCamera.GetComponent<CinemachineVirtualCamera>().m_Lens.LensShift.x = -0.07f;
        DialogueCamera.GetComponent<CinemachineVirtualCamera>().m_Lens.LensShift.y = -0.02f;

        targetGroup.AddMember(npc.transform, 1f, 1f);
        targetGroup.AddMember(player.transform, 1f, 1f);
    }

    //enchainement des dialogue par actions de l'utilisateurs
    public void ContinueDialogue(GameObject player)
    {
        if(dialogueIndex < dialogueLines.Count - 1)
        {
            dialogueIndex++;
            dialogueText.text = dialogueLines[dialogueIndex];
            StopAllCoroutines();
            StartCoroutine(TypeConversation(dialogueText.text));
            
        }
        else
        {
            dialoguePanel.SetActive(false);
            DialogueCamera.SetActive(false);

            player.GetComponent<NPC>().dialogue.Clear();

            MainCamera.fieldOfView = 60.0f;
            MainCamera.GetComponent<PlayerFollow>()._cameraOffset = new Vector3(-0.05f, 3.7f, -9f);
            GameObject.FindWithTag("MainCamera").transform.rotation = Quaternion.Euler(12.796f, 0f, 0f);
            targetGroup.RemoveMember(npc.transform);
            targetGroup.RemoveMember(player.transform);
            foreach (MonoBehaviour obj in stuffToDisable)
            {
                obj.enabled = true;
            }
        }
    }

    IEnumerator TypeConversation(string lines)
    {
        dialogueText.text = "";
        foreach(char lettre in lines.ToCharArray())
        {
            dialogueText.text += lettre;
            yield return null;
        }
    }
}
