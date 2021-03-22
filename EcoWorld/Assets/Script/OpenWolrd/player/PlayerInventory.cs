using UnityEngine;
using UnityEngine.UI;

public class PlayerInventory : MonoBehaviour
{
    public Item[] itemsToAdd;
    private Inventory myInventory = new Inventory(20);
    private Button inventoryOpenButton;

    public Button inventoryCloseButton;
    public GameObject closeButton;

    public Image background;

    public void Awake()
    {
        inventoryOpenButton = GameObject.Find("InventoryOpenButton").GetComponent<Button>();
        inventoryOpenButton.onClick.AddListener(openInventoryUI);

        inventoryCloseButton = GameObject.Find("InventoryCloseButton").GetComponent<Button>();
        inventoryCloseButton.onClick.AddListener(closeInventoryUI);

        closeButton = GameObject.Find("InventoryCloseButton");
        background = closeButton.transform.GetComponentInParent<Image>();

        background.enabled = false;
        closeButton.SetActive(false);
    }

    public void Start()
    {
        foreach (Item item in itemsToAdd)
        {
            myInventory.addItem(new ItemStack(item, 1));
        }
        InventoryManager.INSTANCE.resetInventoryStatus();
        
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
        InventoryManager.INSTANCE.openContainer(new ContainerPlayerInventory(null, myInventory));
        closeButton.SetActive(true);
        background.enabled = true;
        closeButton.GetComponent<Button>().onClick.AddListener(closeInventoryUI);
    }

    public void closeInventoryUI()
    {
        InventoryManager.INSTANCE.closeContainer();
        closeButton.SetActive(false);
        background.enabled = false;
        closeButton.GetComponent<Button>().onClick.RemoveListener(closeInventoryUI);
    }

    //Récupération de la class Inventory
    public Inventory getInventory()
    {
        return myInventory;
    }
}