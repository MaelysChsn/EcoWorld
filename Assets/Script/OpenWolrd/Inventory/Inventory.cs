using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory : MonoBehaviour
{
    public GameObject inventoryObject;

    public Slot[] slots;
    public Button removeItem;

    private Quest quest;
    private List<GoalsUI> goalui;
    public int questID;
    public int itemCount = 0;



    public void Start()
    {
        questID = GameObject.Find("Villagois").GetComponent<NPC>().questId;
        goalui = GameObject.Find("QuestManager").GetComponent<QuestJSONController>().goalsUi;
        foreach (Slot i in slots)
        {
            i.CustomStart();
        }
    }

    public void Update()
    {
        foreach (Slot i in slots)
        {
            i.CheckForItem();
        }
    }

    public void OpenInventory(bool toggleState)
    {
        if (toggleState == true)
        {
            inventoryObject.SetActive(true);
        }
        else
        {
            inventoryObject.SetActive(false);
        }
    }
    
    public void AddItem(Item itemtoAdd, Item startingItem = null)
    {
        int amountInStack = itemtoAdd.amountInStack;
        List<Item> stackableItems = new List<Item>();
        List<Slot> emptySlots = new List<Slot>();

        QuestGoal(QuestManager.instance.questDictionary[questID], itemtoAdd.itemID, itemtoAdd.amountInStack);

        if (startingItem && startingItem.itemID == itemtoAdd.itemID && startingItem.amountInStack < startingItem.maxStackSize)
        {
            stackableItems.Add(startingItem);
        }

        foreach(Slot i in slots)
        {
            if (i.slotsItem)
            {
                Item a = i.slotsItem;
                if (a.itemID == itemtoAdd.itemID && a.amountInStack < a.maxStackSize && a != startingItem)
                {
                    stackableItems.Add(a);
                }
            }
            else
            {
                emptySlots.Add(i);
            }
        }

        foreach(Item i in stackableItems)
        {
            int amountCanAdd = i.maxStackSize - i.amountInStack;
            if(amountInStack <= amountCanAdd)
            {
                i.amountInStack += amountInStack;
                Destroy(itemtoAdd.gameObject);
                return;
            }
            else
            {
                i.amountInStack = i.maxStackSize;
                amountInStack -= amountCanAdd;
            }
        }

        itemtoAdd.amountInStack = amountInStack;
        if(emptySlots.Count > 0)
        {
            itemtoAdd.transform.parent = emptySlots[0].transform;
            itemtoAdd.gameObject.SetActive(false);
        }
    }

    public void QuestGoal(Quest quest, int itemId, int amountInStack)
    {
        foreach(Quest.Items item in quest.goals.items)
        {
            if (itemId == item.id)
            {
                item.currentAmount += amountInStack;
                UpdateUi(itemId, item.currentAmount);
            }
            if (item.currentAmount == item.requiredAmount)
            {
                itemCount++;
                Debug.Log(itemCount);
            }
        }

        if (itemCount == quest.goals.items.Length)
        {
            quest.state.complete = true;
        }
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

    public void RemoveItem(int id, int amountToRemove)
    {
        foreach (Slot i in slots)
        {
            if (amountToRemove <= 0)
            {
                return;
            }
            if (i.slotsItem)
            {
                Item a = i.slotsItem;
                if (a.itemID == id)
                {
                    int amountCanRemove = a.amountInStack;
                    if (amountCanRemove <= amountToRemove)
                    {
                        Destroy(a.gameObject);
                        amountToRemove -= amountCanRemove;
                    }
                    else
                    {
                        a.amountInStack -= amountToRemove;
                        amountToRemove = 0;
                    }
                }
            }
        }
    }

}
