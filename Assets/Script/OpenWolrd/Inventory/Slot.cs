using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.UI;
using System;

public class Slot : MonoBehaviour
{
    public static Slot Instance { get; set; }
    public Item slotsItem;

    Sprite defaultSprite;
    TMP_Text amountText;

    public string idItem;
    public string IdPoubelle;

    public Button removeButton;
    public Inventory inventory;

    public void Awake()
    {
        Instance = this;
    }

    private void Start()
    {
        defaultSprite = GetComponent<Image>().sprite;
        amountText = transform.GetChild(0).GetComponent<TextMeshProUGUI>();

        inventory = GameObject.FindGameObjectWithTag("InventoryManager").GetComponent<Inventory>();

    }

    private void Update()
    {
        CheckForItem();

    }

    public void CheckForItem()
    {
        if (transform.childCount > 1)
        {
            slotsItem = transform.GetChild(1).GetComponent<Item>();
            GetComponent<Image>().sprite = slotsItem.itemSprite;

            if (slotsItem.amountInStack > 1)
            {
                amountText.text = slotsItem.amountInStack.ToString();
            }
        }
        else
        {
            slotsItem = null;
            GetComponent<Image>().sprite = defaultSprite;
            amountText.text = "";
        }
    }

    public void GetIdPoubelle(string idPoubelle)
    {
        IdPoubelle = idPoubelle;
    }

    public void OnSelectedSlot()
    {
        removeButton = GameObject.Find("ItemRemoveBut").GetComponent<Button>();

        if (slotsItem != null)
        {
            removeButton.interactable = true;
            idItem = slotsItem.poubelleID;
            removeButton.onClick.AddListener(() => {
                inventory.RemoveItem(slotsItem.itemID, slotsItem.amountInStack, IdPoubelle, idItem);
            });
        }
        else
        {
            removeButton.interactable = false;
        }

    }
}
