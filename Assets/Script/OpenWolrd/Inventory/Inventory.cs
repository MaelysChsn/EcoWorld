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

    LevelManager level;

    public void Start()
    {
        level = GameObject.Find("LevelBar").GetComponent<LevelManager>();
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

    public void RemoveItem(int id, int amountToRemove, string IdPoubelle, string IdItem)
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

                        level.SetPoints(1200);
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
