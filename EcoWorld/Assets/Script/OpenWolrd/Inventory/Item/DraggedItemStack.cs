using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DraggedItemStack : MonoBehaviour
{
    public Image itemIcon;
    public Text itemAmount;
    private ItemStack myStack = ItemStack.Empty;

    //Récupération des attribue de l'item entrain d'être glisser
    public void setDraggedStack(ItemStack stackIn)
    {
        myStack = stackIn;
    }

    //Assignage d'un item glisser vers une nouvelles slot
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

    //Désactivation de l'item entrain d'être glisser vers une autre slot
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
