using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public Sprite itemSprite;

    public int amountInStack;
    public int maxStackSize = 5;

    public int itemID;
    public string poubelleID;
    Inventory inventory;

    public void Start()
    {
        inventory = GameObject.Find("InventoryManager").GetComponent<Inventory>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            inventory.AddItem(GetComponent<Item>());
        }
    }
}
