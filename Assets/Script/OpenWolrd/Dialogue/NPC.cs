using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPC : MonoBehaviour
{
    [TextArea(3, 10)]
    public string[] dialogue;
    public string name;


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            DialogueManager.Instance.CameraPlayer(this.gameObject, other.gameObject);
            DialogueManager.Instance.AddNewDialogue(dialogue, name);
        }
    }
}
