using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class Quest
{
    public int idQuest;
    public string questName;
    public string description;
    public Dialogue dialogue;
    public Reward reward;
    public Goals goals;
    public State state;

    [System.Serializable]
    public class Dialogue
    {
        public string[] begin;
        public string[] notComplete;
        public string[] complete;
    }

    [System.Serializable]
    public class Reward
    {
        public int experience;
        public int stellas;
    }

    [System.Serializable]
    public class Goals
    {
        public string talkTo;
        public Items[] items;
    }

    [System.Serializable]
    public class Items
    {
        public int id;
        public string name;
        public string sprite;
        public int requiredAmount;
        public int currentAmount;
    }

    [System.Serializable]
    public class State
    {
        public bool complete;
        public bool loading;
    }


}
