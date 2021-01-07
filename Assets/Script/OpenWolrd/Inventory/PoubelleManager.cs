using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PoubelleManager : MonoBehaviour
{
    public string idPoubelle;
    public Button removeItem;

    

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Debug.Log("colision poubelle");
            Slot.Instance.GetIdPoubelle(idPoubelle);
        }

    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            Debug.Log("sortie colision poubelle");
        }
    }
}
