using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Poubelle : MonoBehaviour
{
    private PlayerInventory player;
    private InventoryManager inventoryManager;
    private Inventory inventory = new Inventory(18);

    public string idPoubelle;
    public Button poubelleBut;

    public Image background;
    public GameObject closeButton;

    public void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        inventoryManager = InventoryManager.INSTANCE;


        background.enabled = false;

        closeButton.SetActive(false);
    }


    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            poubelleBut.onClick.AddListener(OpenPoubelle);
            poubelleBut.interactable = true;
        }
    }


    //Ouverture du container Poubelle
    private void OpenPoubelle()
    {
        gameObject.GetComponent<Animation>().Play("poubOpen");

        if (!inventoryManager.hasInventoryCurrentlyOpen())
        {
            background.enabled = true;
            inventoryManager.openContainer(new ContainerTrash(inventory, player.getInventory()));
            closeButton.SetActive(true);
        }
    }

    public void ClosePoubelle()
    {
        inventoryManager.closeContainer();

        background.enabled = false;
        closeButton.SetActive(false);
        gameObject.GetComponent<Animation>().Play("PoubClose");
    }

    private void OnTriggerExit(Collider other)
    {
        poubelleBut.interactable = false;
        poubelleBut.onClick.RemoveListener(OpenPoubelle);
        inventory.removeItem();

    }

    //Récupération du l'inventarie des poubelles
    public Inventory getInventory()
    {
        return inventory;
    }
}
