using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Villager : MonoBehaviour
{
    [TextArea(3, 10)]
    public List<string> dialogue;
    public string name;

    private Quest quest;
    public bool talkTo = false;
    public Button dialogueBut;

    GameObject player;
    GameObject npc;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            player = other.gameObject;
            npc = this.gameObject;
            dialogueBut.onClick.AddListener(() => setDialogue(player, npc));
            dialogueBut.interactable = true;
        }
    }

    public void setDialogue(GameObject player, GameObject npc)
    {
        dialogue.Add("Récupère les trucs dans le coffre frérot!");
        if (dialogue.Count != 0)
        {
            DialogueManager.Instance.CameraPlayer(npc, player);
            DialogueManager.Instance.AddNewDialogue(dialogue, name);
        }
        talkTo = true;
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            dialogue.Clear();
            dialogueBut.interactable = false;
        }
    }
}
