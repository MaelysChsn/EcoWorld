using UnityEngine;
using UnityEngine.UI;

public class PlayerInventory : MonoBehaviour
{
    public Item[] itemsToAdd;
    private Inventory myInventory = new Inventory(20);
    private Button inventoryOpenButton;

    public Button inventoryCloseButton;
    public GameObject closeButton;

    public GameObject background;


    public void Start()
    {
        foreach (Item item in itemsToAdd)
        {
            myInventory.addItem(new ItemStack(item, 1));
        }
        InventoryManager.INSTANCE.resetInventoryStatus();

        inventoryOpenButton = GameObject.Find("InventoryOpenButton").GetComponent<Button>();
        inventoryOpenButton.onClick.AddListener(openInventoryUI);

        inventoryCloseButton = GameObject.FindWithTag("CloseButton").GetComponent<Button>();
        inventoryCloseButton.onClick.AddListener(closeInventoryUI);

        closeButton = GameObject.FindWithTag("CloseButton");
        gameObject.transform.GetComponentInParent<Image>().enabled = false;

        closeButton.SetActive(false);
    }

    //Ajout d'item en le ramassant
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Item")
        {
            myInventory.addItem(new ItemStack(other.GetComponent<ItemGameObject>().itemGameObject, 1));
            Destroy(other.gameObject);
        }
    }

    //Ouverture d'inventaire
    public void openInventoryUI()
    {
        gameObject.transform.GetComponentInParent<Image>().enabled = true;
        InventoryManager.INSTANCE.openContainer(new ContainerPlayerInventory(null, myInventory));
        closeButton.SetActive(true);
    }

    public void closeInventoryUI()
    {
        InventoryManager.INSTANCE.closeContainer();
        gameObject.transform.GetComponentInParent<Image>().enabled = false;
        closeButton.SetActive(false);
    }

    //Récupération de la class Inventory
    public Inventory getInventory()
    {
        return myInventory;
    }
}