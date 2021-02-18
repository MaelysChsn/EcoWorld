using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

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
    public Image background;
    private bool hasInventoryOpen = false;

    public List<GoalsUI> goalui;


    private void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        dragStack = GetComponentInChildren<DraggedItemStack>();
        goalui = GameObject.Find("QuestManager").GetComponent<QuestJSONController>().goalsUi;
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
        background.enabled = false;
        if (currentOpenContainer != null)
        {
            currentOpenContainer.closeContainer();
            background.enabled = true;
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
        background.enabled = false;
        if (currentOpenContainer != null)
        {
            currentOpenContainer.closeContainer();
            background.enabled = true;
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

    public ItemStack removeItem()
    {
        return curDraggedStack;
    }

    public void setDraggedItemStack(ItemStack stackIn)
    {
        dragStack.setDraggedStack(curDraggedStack = stackIn);
    }

    public void UpdateUi(int itemId, int itemCurrentAmount)
    {
        foreach (GoalsUI goal in goalui)
        {
            if (goal.id == itemId.ToString())
            {
                goal.currentAmount = itemCurrentAmount.ToString();
                QuestJSONController.instance.GoalsUi();
            }
        }
    }

}

[System.Serializable]
public class ContainerGetter
{
    public string containerName;
    public GameObject containerPrefab;
}
