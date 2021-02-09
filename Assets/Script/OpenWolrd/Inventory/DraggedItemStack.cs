using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DraggedItemStack : MonoBehaviour
{
    public Image itemIcon;
    public Text itemAmount;
    private ItemStack myStack = ItemStack.Empty;

    public void setDraggedStack(ItemStack stackIn)
    {
        myStack = stackIn;
    }

    public void drawStack()
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
            disableDragStack();
        }
    }

    private void disableDragStack()
    {
        itemIcon.enabled = false;
        itemAmount.text = string.Empty;
    }

    private void Update()
    {
        drawStack();
        transform.position = Input.mousePosition;

    }
}
