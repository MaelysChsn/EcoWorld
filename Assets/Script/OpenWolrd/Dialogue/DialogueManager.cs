using System.Collections;
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

        continueButton.onClick.AddListener(delegate { ContinueDialogue(); });
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

    public void AddNewDialogue(List<string> lines, string npcName)
    {
        dialogueIndex = 0;
        dialogueLines = new List<string>(lines.Capacity);
        dialogueLines.AddRange(lines);

        foreach(string line in lines)
        {
            dialogueLines.Add(line);
        }
        this.npcName = npcName;

        CreateDialogue();
    }

    public void CreateDialogue()
    {
        dialogueText.text = dialogueLines[dialogueIndex];
        nameText.text = npcName;
        dialoguePanel.SetActive(true);
    }

    public void CameraPlayer(GameObject npc, GameObject player)
    {
        this.npc = npc;
        this.player = player;
        DialogueCamera.SetActive(true);

        targetGroup.AddMember(npc.transform, 1f, 1f);
        targetGroup.AddMember(player.transform, 1f, 1f);
    }

    public void ContinueDialogue()
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

            MainCamera.fieldOfView = 60.0f;
            MainCamera.GetComponent<PlayerFollow>()._cameraOffset = new Vector3(-0.26f, 3.35f, -5.75f);
            GameObject.FindWithTag("MainCamera").transform.rotation = Quaternion.Euler(12.796f, 0f, 0f);
            targetGroup.RemoveMember(npc.transform);
            targetGroup.RemoveMember(player.transform);
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
