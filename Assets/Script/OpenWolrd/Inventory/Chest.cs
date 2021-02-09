using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Chest : MonoBehaviour
{
    private PlayerInventory player;
    private InventoryManager inventoryManager;
    private Inventory inventory = new Inventory(18);

    public void Start()
    {
        player = FindObjectOfType<PlayerInventory>();
        inventoryManager = InventoryManager.INSTANCE;

    }

    public void Update()
    {
        
    }

    private void OnMouseOver()
    {
        float distance = Vector3.Distance(transform.position, player.transform.position);

        if(distance <= 2 && !inventoryManager.hasInventoryCurrentlyOpen())
        {
            if (Input.GetMouseButtonDown(1))//Click droit
            {
                inventoryManager.openContainer(new ContainerChest(inventory, player.getInventory()));
            }
        }
    }
}
