using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChestManager : MonoBehaviour
{
    public string villagerName;
    public bool TalkTo;

    private void OnTriggerEnter(Collider other)
    {
        TalkTo = GameObject.Find("Villager_1").GetComponent<Villager>().talkTo;
        if (other.gameObject.tag == "Player" && TalkTo == true)
        {
            Debug.Log("Coffre ouvert");
            gameObject.GetComponent<Animation>().Play("OpenChest");
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            gameObject.GetComponent<Animation>().Play("CloseChest");
        }
    }
}
