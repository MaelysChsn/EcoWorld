using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class InventoryManager : MonoBehaviour
{
    #region Singleton
    public static InventoryManager INSTANCE;

    private void Awake()
    {
        INSTANCE = this;
    }
    #endregion

    public GameObject slotPrefab;
    public List<ContainerGetter> containers = new List<ContainerGetter>();
    public MonoBehaviour[] stuffToDisable;
    private Container currentOpenContainer;
    private ItemStack curDraggedStack = ItemStack.Empty;
    private GameObject spawnedDragStack;
    private DraggedItemStack dragStack;
    private PlayerInventory player;
    private bool hasInventoryOpen = false;


    private void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        dragStack = GetComponentInChildren<DraggedItemStack>();   
    }

    public void Update()
    {
        if (hasInventoryOpen)
        {
            if (Input.GetKeyDown(KeyCode.M))
            {
                hasInventoryOpen = false;
                foreach (MonoBehaviour obj in stuffToDisable)
                {
                    obj.enabled = true;
                }
            }
        }
    }

    public bool hasInventoryCurrentlyOpen()
    {
        return hasInventoryOpen;
    }

    public void resetInventoryStatus()
    {
        hasInventoryOpen = false;

        foreach (MonoBehaviour obj in stuffToDisable)
        {
            obj.enabled = true;
        }
    }

    public GameObject getContainerPrefab(string name)
    {
        foreach (ContainerGetter container in containers)
        {
            if (container.containerName == name)
            {
                return container.containerPrefab;
            }
        }
        return null;
    }

    public void openContainer(Container container)
    {
        if (currentOpenContainer != null)
        {
            currentOpenContainer.closeContainer();
        }
        currentOpenContainer = container;
        hasInventoryOpen = true;
        foreach (MonoBehaviour obj in stuffToDisable)
        {
            obj.enabled = false;
        }
    }

    public void closeContainer()
    {
        if (currentOpenContainer != null)
        {
            currentOpenContainer.closeContainer();
        }
        hasInventoryOpen = false;
        foreach (MonoBehaviour obj in stuffToDisable)
        {
            obj.enabled = true;
        }
    }

    public ItemStack getDraggedItemStack()
    {
        return curDraggedStack;
    }

    public void setDraggedItemStack(ItemStack stackIn)
    {
        dragStack.setDraggedStack(curDraggedStack = stackIn);
    }
}

[System.Serializable]
public class ContainerGetter
{
    public string containerName;
    public GameObject containerPrefab;
}
