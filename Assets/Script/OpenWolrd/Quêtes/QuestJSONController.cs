using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class QuestJSONController : MonoBehaviour
{
    private Quest quest;
    public GameObject quetePanel;

    public TMP_Text questName;
    public TMP_Text description;

    public void Start()
    {
        ShowQuestInfo(QuestManager.instance.questDictionary[0]);
    }


    //void SetQuestExemple()
    //{
    //    quest = new Quests();
    //    quest.questName = "Livraison de plantes";
    //    quest.description = "J'ai besoin de plante pour préparer la potion du village";
    //    //Reward
    //    quest.reward = new Quests.Reward();
    //    quest.reward.experience = 400;
    //    quest.reward.stellas = 20;

    //    //Task
    //    quest.goals = new Quests.Goals();
    //    quest.goals.npcName = "Botaniste";
    //    quest.goals.items = new Quests.Items[2];

    //    quest.goals.items[0] = new Quests.Items();
    //    quest.goals.items[0].id = 0;
    //    quest.goals.items[0].name = "Tomate";
    //    quest.goals.items[0].amount = 10;

    //    quest.goals.items[1] = new Quests.Items();
    //    quest.goals.items[1].id = 1;
    //    quest.goals.items[1].name = "Poireaux";
    //    quest.goals.items[1].amount = 5;
    //}

    public void ShowQuestInfo(Quest quest)
    {
        questName.text = quest.questName;
        description.text = quest.description + "    " + quest.goals.talkTo;
    }
}
