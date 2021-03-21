using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory
{
    private List<ItemStack> inventoryContents = new List<ItemStack>();
    private Quest quest;
    private int questID;
    private int itemCount = 0;

    private ItemStack myStack = ItemStack.Empty;

    public void Start()
    {
        questID = GameObject.FindObjectOfType<NPC>().questId;
    }

    //Creation des slots contenue dans l'inventaire créer
    public Inventory(int size)
    {
        for (int i = 0; i < size; i++)
        {
            inventoryContents.Add(new ItemStack(i));
        }
    }

    //Ajout d'item à l'inventaire
    public bool addItem(ItemStack input)
    {
        foreach (ItemStack stack in inventoryContents)
        {
            if (stack.isEmpty()) //itemStack n'a pas d'item
            {
                stack.setStack(input);
                return true;
            }
            else //itemsatck a un item
            {
                if (ItemStack.areItemsEqual(input, stack))
                {
                    if (stack.canAdd(input.getAmount()))
                    {
                        stack.increaseAmount(input.getAmount());
                        return true;
                    }
                    else
                    {
                        int difference = (stack.getAmount() + input.getAmount()) - stack.getItem().maxStackSize;
                        stack.setCount(stack.getItem().maxStackSize);
                        input.setCount(difference);
                    }
                    
                }

            }
            getQuest(stack);
        }

        return false;
    }

    //Récupération de la quête en cours 
    public void getQuest(ItemStack stack)
    {
        if (QuestManager.instance.questDictionary[questID].state.loading == true)
        {
            QuestGoal(QuestManager.instance.questDictionary[questID], stack.getItem().ItemID, stack.getAmount());
        }
    }

    //Destruction d'items de l'inventaire
    public void removeItem()
    {
        foreach (ItemStack stack in inventoryContents)
        {
            if (!stack.isEmpty()) //itemStacka pas d'item
            {
                LevelManager.INSTANCE.SetExp(700);
                LevelManager.INSTANCE.SetStellas(15);
                stack.setStack(ItemStack.Empty);
                Slot.INSTANCE.updateSlot();
            }
        }
    }

    //Ajout des item dans les lots de l'inventaire
    public ItemStack getStackInSlot(int index)
    {
        return inventoryContents[index];
    }


    public List<ItemStack> getInventoryStacks()
    {
        return inventoryContents;
    }

    //Mise à jour des objectifs de la quête en cours avce les items ajoutés à l'inventaire
    public void QuestGoal(Quest quest, int itemId, int amountInStack)
    {
        foreach (Quest.Items item in quest.goals.items)
        {
            if (itemId == item.id)
            {
                item.currentAmount += amountInStack;
                InventoryManager.INSTANCE.UpdateUi(itemId, item.currentAmount);
                if (item.currentAmount == item.requiredAmount)
                {
                    itemCount++;
                    Debug.Log("item count: " + itemCount);
                }
            }
        }

        if (itemCount == quest.goals.items.Length)
        {
            quest.state.complete = true;
        }
    }


}
