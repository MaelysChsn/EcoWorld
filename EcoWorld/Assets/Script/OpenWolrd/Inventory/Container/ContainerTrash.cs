using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ContainerTrash : Container
{
    public ContainerTrash(Inventory containerInventory, Inventory playerInventory) : base(containerInventory, playerInventory)
    {
        //Player Inventory Slots Row 
        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, i, 60 + (85 * i), -50, 70);
        }
        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, 5 + i, 60 + (85 * i), -140, 70);
        }
        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, 10 + i, 60 + (85 * i), -230, 70);
        }
        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, 15 + i, 60 + (85 * i), -320, 70);
        }


        //Chest Inventory Slots Row 
        for (int i = 0; i < 4; i++)
        {
            addSlotToContainer(containerInventory, i, 526 + (85 * i), -50, 70);
        }
        for (int i = 0; i < 4; i++)
        {
            addSlotToContainer(containerInventory, 4 + i, 526 + (85 * i), -140, 70);
        }
        for (int i = 0; i < 4; i++)
        {
            addSlotToContainer(containerInventory, 8 + i, 526 + (85 * i), -230, 70);
        }
    }

    public override GameObject getContainerPrefab()
    {
        return InventoryManager.INSTANCE.getContainerPrefab("Trash Inventory");
    }
}