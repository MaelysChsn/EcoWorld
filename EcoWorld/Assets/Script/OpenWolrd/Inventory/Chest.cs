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


    public Image background;
    public GameObject closeButton;


    public void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        inventoryManager = InventoryManager.INSTANCE;
        closeButton.SetActive(false);
        background.enabled = false;
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
        gameObject.GetComponent<Animation>().Play("OpenChest");
        if (!inventoryManager.hasInventoryCurrentlyOpen())
        {

            background.enabled = true;
            inventoryManager.openContainer(new ContainerChest(inventory, player.getInventory()));
            closeButton.SetActive(true);
        }

    }

    public void CloseChest()
    {
        inventoryManager.closeContainer();

        background.enabled = false;
        closeButton.SetActive(false);
        gameObject.GetComponent<Animation>().Play("CloseChest");
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            coffreBut.interactable = false;
            coffreBut.onClick.RemoveListener(OpenChest);
        }
    }
}