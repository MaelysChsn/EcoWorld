using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;


public class QuestJSONController : MonoBehaviour
{
    public static QuestJSONController instance;
    private Quest quest;
    public List<GameObject> goals;
    public List<GoalsUI> goalsUi;

    public TMP_Text questId;
    public TMP_Text questName;
    public TMP_Text description;
    public TMP_Text experience;
    public TMP_Text stellas;

    void Awake()
    {
        if (instance == null) instance = this;
    }

    //Affichage des informations de la quêtes à l'écran 
    public void ShowQuestInfo(Quest quest)
    {

        //Description
        questId.text += quest.idQuest.ToString();
        questName.text = quest.questName;
        description .text = quest.description;

        //Reward
        experience.text = quest.reward.experience.ToString();
        stellas.text = quest.reward.stellas.ToString();

        //Goals
        if (quest.goals.items != null)
        {
            foreach(Quest.Items items in quest.goals.items)
            {
                goalsUi.Add(new GoalsUI {
                    id = items.id.ToString(),
                    name = items.name,
                    sprite = items.sprite,
                    requiredAmount = items.requiredAmount.ToString(),
                    currentAmount = items.currentAmount.ToString()
                }); 
            }
            GoalsUi();
        }
        
    }

    //affichage des items à récolté selon la quêtes
    public void GoalsUi()
    {
        for (int i = 0; i < goals.Count; i++)
        {
            goals[i].transform.GetChild(1).GetComponent<TextMeshProUGUI>().text = goalsUi[i].name;
            goals[i].transform.GetChild(2).GetChild(0).GetComponent<TextMeshProUGUI>().text = goalsUi[i].currentAmount + "/" + goalsUi[i].requiredAmount;
            goals[i].transform.GetChild(0).GetComponent<Image>().sprite = Resources.Load<Sprite>(goalsUi[i].sprite);

        }
    }
}

[System.Serializable]
public class GoalsUI
{
    public string id;
    public string name;
    public string sprite;
    public string currentAmount;
    public string requiredAmount;
}
