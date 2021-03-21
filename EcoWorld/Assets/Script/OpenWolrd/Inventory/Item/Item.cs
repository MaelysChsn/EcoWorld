﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//Class d'item
[CreateAssetMenu(fileName = "New Item")]
public class Item : ScriptableObject
{
    public string ItemName;
    public int ItemID;
    public Sprite ItemIcon;
    [Range(1, 20)] public int maxStackSize = 20;
}

