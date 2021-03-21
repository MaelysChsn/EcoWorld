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

    //Vérifiaction de l'ouverture de l'inventaire
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


    //récupération du container inventory 
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

    //Ouverture du container inventory 
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

    //Fermeture du container inventory 
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

    //Glissage d'un item vers une autre slot
    public ItemStack getDraggedItemStack()
    {
        return curDraggedStack;
    }

    //Destruction d'un item glisser vers une autre slot
    public ItemStack removeItem()
    {
        return curDraggedStack;
    }

    //Récupération des attribue de l'item entrain d'etre glisser
    public void setDraggedItemStack(ItemStack stackIn)
    {
        Debug.Log("dragging");
        dragStack.setDraggedStack(curDraggedStack = stackIn);
    }

    //Mise à jour des élements de la quêtes afficher dans le panneaux des quêtes visibles par l'utilisateur
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
