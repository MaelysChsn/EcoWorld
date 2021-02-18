using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Chest : MonoBehaviour
{
    private PlayerInventory player;
    private InventoryManager inventoryManager;
    private Inventory inventory = new Inventory(18);

    public string villagerName;
    public bool TalkTo;
    public Button coffreBut;

    private bool coffreOpen = false;

    public void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        inventoryManager = InventoryManager.INSTANCE;

    }

    private void OnTriggerEnter(Collider other)
    {
        TalkTo = GameObject.Find("Villager_1").GetComponent<Villager>().talkTo;
        if (other.gameObject.tag == "Player" && TalkTo == true)
        {
            coffreBut.onClick.AddListener(OpenChest);
            coffreBut.interactable = true;
        }
    }

    private void OpenChest()
    {
        coffreOpen = !coffreOpen;
        if (coffreOpen)
        {
            if (!inventoryManager.hasInventoryCurrentlyOpen())
            {
                inventoryManager.openContainer(new ContainerChest(inventory, player.getInventory()));
            }
            gameObject.GetComponent<Animation>().Play("OpenChest");
        }
        else
        {
            inventoryManager.closeContainer();
            gameObject.GetComponent<Animation>().Play("CloseChest");
        }
       
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            coffreBut.interactable = false;
            coffreOpen = false;
            coffreBut.onClick.RemoveListener(OpenChest);
        }
    }
}
