using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPC : MonoBehaviour
{
    [TextArea(3, 10)]
    public List<string> dialogue;
    public string name;
    public int questId;

    private Quest quest;
    public LevelManager level;

    GameObject player;
    GameObject npc;

    public void Start()
    {
        level = GameObject.Find("LevelBar").GetComponent<LevelManager>();
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            player = other.gameObject;
            npc = this.gameObject;
            if (QuestManager.instance.questDictionary[questId].idQuest == questId)
            {
                QuestDialogue(QuestManager.instance.questDictionary[questId]);
            }
            else
            {
                dialogue.Add("Je n'ai pas de nouvelle quête a te proposer mon ami !");
                DialogueController(npc, player);
            }
        }
    }

    private void OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            dialogue.Clear();
        }
    }


    void QuestDialogue(Quest quest)
    {
        
        //Quete pas commencer
        if (quest.state.complete != true && quest.state.loading != true)
        {
            // addd begin dialogue
            if (quest.dialogue.begin != null)
            {
                foreach (string line in quest.dialogue.begin)
                {
                    dialogue.Add(line);
                }

                if (dialogue.Count == quest.dialogue.begin.Length)
                {
                    DialogueController(npc, player);
                }
                QuestJSONController.instance.ShowQuestInfo(QuestManager.instance.questDictionary[questId]);
            }
            quest.state.loading = true;

            //JsonUtility.ToJson(quest);
        }

        //Quete pas terminer
        else if (quest.state.complete != true && quest.state.loading == true)
        {
            //add notComplete dialogue
            if (quest.dialogue.notComplete != null)
            {
                foreach (string line in quest.dialogue.notComplete)
                {
                    dialogue.Add(line);
                }
                DialogueController(npc, player);
            }
        }

        //Quête terminer
        else if (quest.state.complete == true && quest.state.loading == true)
        {
            GameObject.Find("InventoryManager").GetComponent<Inventory>().itemCount = 0;
            questId++;
            //return QuestManager intance new id
            if (quest.dialogue.complete != null)
            {
                foreach (string line in quest.dialogue.complete)
                {
                    dialogue.Add(line);
                }
                DialogueController(npc, player);
            }
            Debug.Log("Id Quest: " + questId);
            level.SetExp(quest.reward.experience);
            level.SetStellas(quest.reward.stellas);
        }
    }

    void DialogueController(GameObject player, GameObject npc)
    {
        if(dialogue.Count != 0)
        {
            DialogueManager.Instance.CameraPlayer(npc, player);
            DialogueManager.Instance.AddNewDialogue(dialogue, name);
        } 
    }
}
