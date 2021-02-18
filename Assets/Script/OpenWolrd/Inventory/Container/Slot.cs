using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Slot : MonoBehaviour, IPointerDownHandler
{
    public Image itemIcon;
    public Text itemAmount;
    private int slotID;
    private ItemStack myStack;
    private Container attachedContainer;
    private InventoryManager inventoryManager;

    public void setSlot(Inventory attachedInventory, int slotID, Container attachedContainer)
    {
        this.slotID = slotID;
        this.attachedContainer = attachedContainer;
        myStack = attachedInventory.getStackInSlot(slotID);
        inventoryManager = InventoryManager.INSTANCE;
        updateSlot();
    }


    public void updateSlot()
    {
        if (!myStack.isEmpty())
        {
            itemIcon.enabled = true;
            itemIcon.sprite = myStack.getItem().ItemIcon;
            if (myStack.getAmount() > 1)
            {
                itemAmount.text = myStack.getAmount().ToString();
            }
            else
            {
                itemAmount.text = string.Empty;
            }
        }
        else
        {
            itemIcon.enabled = false;
            itemAmount.text = string.Empty;
        }
    }

    private void setSlotContents(ItemStack stackIn)
    {
        myStack.setStack(stackIn);
        updateSlot();
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        ItemStack curDraggedStack = inventoryManager.getDraggedItemStack();
        ItemStack stackCopy = myStack.copy();
        if (eventData.pointerId == 0 || eventData.pointerId == -1)
        {
            onTouch(curDraggedStack, stackCopy);
        }
    }

    private void onTouch(ItemStack curDraggedStack, ItemStack stackCopy)
    {
        if (!myStack.isEmpty() && curDraggedStack.isEmpty())
        {
            inventoryManager.setDraggedItemStack(stackCopy);
            this.setSlotContents(ItemStack.Empty);
        }

        if(myStack.isEmpty() && !curDraggedStack.isEmpty())
        {
            this.setSlotContents(curDraggedStack);
            inventoryManager.setDraggedItemStack(ItemStack.Empty);
        }

        if(!myStack.isEmpty() && !curDraggedStack.isEmpty())
        {
            if(ItemStack.areItemsEqual(stackCopy, curDraggedStack))
            {
                if (stackCopy.canAdd(curDraggedStack.getAmount()))
                {
                    stackCopy.increaseAmount(curDraggedStack.getAmount());
                    this.setSlotContents(stackCopy);
                    inventoryManager.setDraggedItemStack(ItemStack.Empty);
                }
                else
                {
                    int difference = (stackCopy.getAmount() + curDraggedStack.getAmount()) - stackCopy.getItem().maxStackSize;
                    stackCopy.setCount(myStack.getItem().maxStackSize);
                    ItemStack dragCopy = curDraggedStack.copy();
                    dragCopy.setCount(difference);
                    this.setSlotContents(stackCopy);
                    inventoryManager.setDraggedItemStack(dragCopy);

                }
            }
            else
            {
                ItemStack curDragCopy = curDraggedStack.copy();
                this.setSlotContents(curDraggedStack);
                inventoryManager.setDraggedItemStack(stackCopy);
            }
        }
    }
}
