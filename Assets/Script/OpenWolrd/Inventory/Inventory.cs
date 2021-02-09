using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Inventory
{
    private List<ItemStack> inventoryContents = new List<ItemStack>();

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
        }
        return false;
    }

    public ItemStack getStackInSlot(int index)
    {
        return inventoryContents[index];
    }


    public List<ItemStack> getInventoryStacks()
    {
        return inventoryContents;
    }


    //public void QuestGoal(Quest quest, int itemId, int amountInStack)
    //{
    //    foreach(Quest.Items item in quest.goals.items)
    //    {
    //        if (itemId == item.id)
    //        {
    //            item.currentAmount += amountInStack;
    //            UpdateUi(itemId, item.currentAmount);
    //        }
    //        if (item.currentAmount == item.requiredAmount)
    //        {
    //            itemCount++;
    //            Debug.Log(itemCount);
    //        }
    //    }

    //    if (itemCount == quest.goals.items.Length)
    //    {
    //        quest.state.complete = true;
    //    }
    //}

    //public void UpdateUi(int itemId, int itemCurrentAmount)
    //{
    //    foreach (GoalsUI goal in goalui)
    //    {
    //        if (goal.id == itemId.ToString())
    //        {
    //            goal.currentAmount = itemCurrentAmount.ToString();
    //            QuestJSONController.instance.GoalsUi();
    //        }
    //    }
    //}


}
