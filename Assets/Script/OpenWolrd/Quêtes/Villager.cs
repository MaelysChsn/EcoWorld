using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Villager : MonoBehaviour
{
    [TextArea(3, 10)]
    public List<string> dialogue;
    public string name;

    private Quest quest;
    public bool talkTo = false;

    GameObject player;
    GameObject npc;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            player = other.gameObject;
            npc = this.gameObject;
            dialogue.Add("Récupère les trucs dans le coffre frérot!");
            if (dialogue.Count != 0)
            {
                DialogueManager.Instance.CameraPlayer(npc, player);
                DialogueManager.Instance.AddNewDialogue(dialogue, name);
            }
            talkTo = true;
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            dialogue.Clear();
        }
    }
}
