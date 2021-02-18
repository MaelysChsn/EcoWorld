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
    private Slot slot;

    public void Start()
    {
        questID = GameObject.FindObjectOfType<NPC>().questId;
    }

    public Inventory(int size)
    {
        for (int i = 0; i < size; i++)
        {
            inventoryContents.Add(new ItemStack(i));
        }
    }

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
            if(QuestManager.instance.questDictionary[questID].state.loading == true)
            {
                QuestGoal(QuestManager.instance.questDictionary[questID], stack.getItem().ItemID, stack.getAmount());
            }
        }

        return false;
    }

    public void removeItem()
    {
        foreach (ItemStack stack in inventoryContents)
        {
            if (!stack.isEmpty()) //itemStack n'a pas d'item
            {
                if (!myStack.isEmpty() && stack.isEmpty())
                {
                    myStack.setStack(ItemStack.Empty);
                    slot.updateSlot();
                }
            }
        }
    }

    public ItemStack getStackInSlot(int index)
    {
        return inventoryContents[index];
    }


    public List<ItemStack> getInventoryStacks()
    {
        return inventoryContents;
    }


    public void QuestGoal(Quest quest, int itemId, int amountInStack)
    {
        foreach (Quest.Items item in quest.goals.items)
        {
            if (itemId == item.id)
            {
                item.currentAmount += amountInStack;
                if (item.currentAmount == item.requiredAmount)
                {
                    itemCount++;
                    Debug.Log("item count: " + itemCount);
                }
                else
                {
                    InventoryManager.INSTANCE.UpdateUi(itemId, item.currentAmount);
                }
            }
        }

        if (itemCount == quest.goals.items.Length)
        {
            quest.state.complete = true;
        }
    }


}
