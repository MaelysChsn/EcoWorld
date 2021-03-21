using UnityEngine;
using System.Collections;

public class ItemStack
{
    public static ItemStack Empty = new ItemStack();
    public Item item;
    public int count;
    public int itemID;
    public int slotID;

    public ItemStack()
    {
        this.item = null;
        this.count = 0;
        this.slotID = -1;
    }

    public ItemStack(int slotID)
    {
        this.item = null;
        this.count = 0;
        this.slotID = slotID;
    }

    public ItemStack(Item item, int amount)
    {
        this.item = item;
        this.count = amount;
        this.slotID = -1;
    }

    public ItemStack(Item item, int amount, int slotID)
    {
        this.item = item;
        this.count = amount;
        this.slotID = slotID;
    }

    public Item getItem()
    {
        return this.item;
    }

    public int getAmount()
    {
        return this.count;
    }

    public int getItemID()
    {
        return this.itemID;
    }

    public void setStack(ItemStack stackIn)
    {
        this.item = stackIn.getItem();
        this.count = stackIn.getAmount();
        this.itemID = stackIn.getItemID();
    }

    public bool isEmpty()
    {
        return this.count < 1;
    }

    public void increaseAmount(int amount)
    {
        this.count += amount;
    }

    public void decreaseAmount(int amount)
    {
        this.count -= amount;
    }

    public void setCount(int amount)
    {
        this.count = amount;
    }
    public bool canAdd(int amount)
    {
        return (this.count + amount) <= this.item.maxStackSize;
    }

    public ItemStack separateStack(int count)
    {
        int i = Mathf.Min(count, count);
        ItemStack copiedStack = this.copy();
        copiedStack.setCount(i);
        this.decreaseAmount(i);
        return copiedStack;
    }

    public ItemStack copy()
    {
        return new ItemStack(this.item, this.count, this.slotID);
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
