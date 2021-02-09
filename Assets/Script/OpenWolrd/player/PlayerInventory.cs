using UnityEngine;
using System.Collections;

public class PlayerInventory : MonoBehaviour
{
    public Item[] itemsToAdd;
    private Inventory myInventory = new Inventory(20);


    public void Start()
    {
        foreach (Item item in itemsToAdd)
        {
            myInventory.addItem(new ItemStack(item, 1));
        }
        InventoryManager.INSTANCE.resetInventoryStatus();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
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

        if (Input.GetKeyDown(KeyCode.G))
        {
            if (!InventoryManager.INSTANCE.hasInventoryCurrentlyOpen())
            {
                InventoryManager.INSTANCE.closeContainer();
            }
        }

    }

    public Inventory getInventory()
    {
        return myInventory;
    }
}
