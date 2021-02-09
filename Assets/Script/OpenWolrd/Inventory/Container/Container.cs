using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Container
{
    private List<Slot> slots = new List<Slot>();
    private GameObject spawnedContainerPrefab;
    private Inventory containerInventory;
    private Inventory playerInventory;

    public Container(Inventory containerInventory, Inventory playerInventory)
    {
        this.containerInventory = containerInventory;
        this.playerInventory = playerInventory;
        openContainer();
    }

    public void addSlotToContainer(Inventory inventory, int slotID, float x, float y, int slotSize)
    {
        GameObject spawnedSlot = Object.Instantiate(InventoryManager.INSTANCE.slotPrefab);
        Slot slot = spawnedSlot.GetComponent<Slot>();

        RectTransform slotRT = slot.GetComponent<RectTransform>();
        slot.setSlot(inventory, slotID, this);

        spawnedSlot.transform.SetParent(spawnedContainerPrefab.transform);
        spawnedSlot.transform.SetAsLastSibling();

        slotRT.pivot = new Vector2(0, 1);
        slotRT.anchoredPosition = new Vector2(x, y);
        slotRT.sizeDelta = Vector2.one * slotSize;
        slotRT.localScale = Vector3.one;
        slots.Add(slot);
    }

    public void updateSlot()
    {
        foreach (Slot slot in slots)
        {
            slot.updateSlot();
        }
    }

    public void openContainer()
    {
        spawnedContainerPrefab = Object.Instantiate(getContainerPrefab(), InventoryManager.INSTANCE.transform);
        spawnedContainerPrefab.transform.SetAsFirstSibling();

    }

    public void closeContainer()
    {
        Object.Destroy(spawnedContainerPrefab);
    }

    public virtual GameObject getContainerPrefab()
    {
        return null;
    }

    public GameObject getSpawnedContainer()
    {
        return spawnedContainerPrefab;
    }

    public Inventory getContainerInventory()
    {
        return containerInventory;
    }

    public Inventory getPlayerInventory()
    {
        return playerInventory;
    }
}
