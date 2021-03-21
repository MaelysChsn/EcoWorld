using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class QuestManager : MonoBehaviour
{
    public static QuestManager instance;
    public Dictionary<int, Quest> questDictionary = new Dictionary<int, Quest>();
    public int questid = 0;
    void Awake()
    {
        if(instance == null) instance = this;
        LoadQuests();
    }

    //Récupérations des données des quêtes en JSON et les convertir en données lisibles par unity
    void LoadQuests()
    {
        string[] questDataArray = Resources.Load<TextAsset>("JSONFile/Quests").text.Split(';');
       
        foreach (string s in questDataArray)
        {
            Quest newQuest = JsonUtility.FromJson<Quest>(s);
            print("quest id " + newQuest.idQuest + " s" + newQuest.questName);
            questDictionary.Add(questid, newQuest);
            questid++;
        }
    }
}


