using UnityEngine;
using System.Collections;

public class ItemStack : MonoBehaviour
{
    public static ItemStack Empty = new ItemStack();
    public Item item;
    public int amount;
    public int itemID;
    public int slotID;

    public ItemStack()
    {
        this.item = null;
        this.amount = 0;
        this.slotID = -1;
    }

    public ItemStack(int slotID)
    {
        this.item = null;
        this.amount = 0;
        this.slotID = slotID;
    }

    public ItemStack(Item item, int amount)
    {
        this.item = item;
        this.amount = amount;
        this.slotID = -1;
    }

    public ItemStack(Item item, int amount, int slotID)
    {
        this.item = item;
        this.amount = amount;
        this.slotID = slotID;
    }

    public Item getItem()
    {
        return this.item;
    }

    public int getAmount()
    {
        return this.amount;
    }

    public int getItemID()
    {
        return this.itemID;
    }

    public void setStack(ItemStack stackIn)
    {
        this.item = stackIn.getItem();
        this.amount = stackIn.getAmount();
        this.itemID = stackIn.getItemID();
    }

    public bool isEmpty()
    {
        return this.amount < 1;
    }

    public void increaseAmount(int amount)
    {
        this.amount += amount;
    }

    public void decreaseAmount(int amount)
    {
        this.amount -= amount;
    }

    public void setCount(int amount)
    {
        this.amount = amount;
    }
    public bool canAdd(int amount)
    {
        return (this.amount + amount) <= this.item.maxStackSize;
    }

    public ItemStack separateStack(int count)
    {
        int i = Mathf.Min(count, amount);
        ItemStack copiedStack = this.copy();
        copiedStack.setCount(i);
        this.decreaseAmount(i);
        return copiedStack;
    }

    public ItemStack copy()
    {
        return new ItemStack(this.item, this.amount, this.slotID);
    }

    public bool isItemEqual(ItemStack stackIn)
    {
        return !stackIn.isEmpty() && this.item == stackIn.getItem();
    }

    public static bool areItemsEqual(ItemStack stackA, ItemStack stackB)
    {
        return stackA == stackB ? true : (!stackA.isEmpty() && !stackB.isEmpty() ? stackA.isItemEqual(stackB) : false);
    }
}
