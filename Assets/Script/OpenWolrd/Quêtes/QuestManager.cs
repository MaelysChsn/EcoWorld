using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManager : MonoBehaviour
{
    public static QuestManager instance;
    public Dictionary<int, Quest> questDictionary = new Dictionary<int, Quest>();

    void Awake()
    {
        if(instance == null) instance = this;
        LoadQuests();
    }

    void LoadQuests()
    {
        Quest newQuest = JsonUtility.FromJson<Quest>(Resources.Load<TextAsset>("JSONFile/Quests").text);
        questDictionary.Add(newQuest.idQuest, newQuest);
    }
}


