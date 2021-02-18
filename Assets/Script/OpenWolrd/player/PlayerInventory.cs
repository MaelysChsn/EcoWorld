using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class PlayerInventory : MonoBehaviour
{
    public Item[] itemsToAdd;
    private Inventory myInventory = new Inventory(20);
    private Button inventoryButton;


    public void Start()
    {
        foreach (Item item in itemsToAdd)
        {
            myInventory.addItem(new ItemStack(item, 1));
        }
        InventoryManager.INSTANCE.resetInventoryStatus();

        inventoryButton = GameObject.Find("InventoryButton").GetComponent<Button>();
        inventoryButton.onClick.AddListener(openInventoryUI);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Item")
        {
            myInventory.addItem(new ItemStack(other.GetComponent<ItemGameObject>().itemGameObject, 1));
            Destroy(other.gameObject);
        }
    }

    public void openInventoryUI()
    {
        if (!InventoryManager.INSTANCE.hasInventoryCurrentlyOpen())
        {
            InventoryManager.INSTANCE.openContainer(new ContainerPlayerInventory(null, myInventory));
        }
        else
        {
            InventoryManager.INSTANCE.closeContainer();
        }
    }

    public Inventory getInventory()
    {
        return myInventory;
    }
}
