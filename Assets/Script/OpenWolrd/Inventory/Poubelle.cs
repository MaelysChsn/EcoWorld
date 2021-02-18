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

    private bool poubelleOpen = false;

    public void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        inventoryManager = InventoryManager.INSTANCE;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            poubelleBut.onClick.AddListener(OpenPoubelle);
            poubelleBut.interactable = true;
        }

    }

    private void OpenPoubelle()
    {
        poubelleOpen = !poubelleOpen;
        if (poubelleOpen)
        {
            if (!inventoryManager.hasInventoryCurrentlyOpen())
            {
                inventoryManager.openContainer(new ContainerTrash(inventory, player.getInventory()));
            }
        }
        else
        {
            inventoryManager.closeContainer();
        }
    }

    private void OnTriggerExit(Collider other)
    {
        poubelleOpen = false;
        poubelleBut.interactable = false;
        poubelleBut.onClick.RemoveListener(OpenPoubelle);

        inventory.removeItem();

    }

    public Inventory getInventory()
    {
        return inventory;
    }
}
