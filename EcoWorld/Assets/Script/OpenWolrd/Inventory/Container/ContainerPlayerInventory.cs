using UnityEngine;
using System.Collections;

public class ContainerPlayerInventory : Container
{
    public ContainerPlayerInventory(Inventory containerInventory, Inventory playerInventory) : base(containerInventory, playerInventory)
    {
        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, i, 60 + (95 * i), -40, 80);
        }

        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, 5 + i, 60 + (95 * i), -130, 80);

        }

        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, 10 + i, 60 + (95 * i), -220, 80);
        }

        for (int i = 0; i < 5; i++)
        {
            addSlotToContainer(playerInventory, 15 + i, 60 + (95 * i), -310, 80);
        }
    }

    public override GameObject getContainerPrefab()
    {
        return InventoryManager.INSTANCE.getContainerPrefab("Player Inventory");
    }
}
