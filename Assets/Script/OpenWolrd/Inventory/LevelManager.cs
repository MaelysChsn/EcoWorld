using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class LevelManager : MonoBehaviour
{
    public Slider slider;
    TMP_Text scoreText;
    TMP_Text levelText;

    TMP_Text stellasText;

    public int level;

    public void Start()
    {
        levelText = GameObject.Find("Level").transform.GetChild(0).GetComponent<TextMeshProUGUI>();
        scoreText = GameObject.Find("Score").GetComponent<TextMeshProUGUI>();
        stellasText = GameObject.Find("Stellas").GetComponent<TextMeshProUGUI>();

        slider = GetComponent<Slider>();
        scoreText.text = slider.value.ToString() + "/2000";
    }

    public void SetExp(int points)
    {
        if ((slider.value + points) < 2000)
        {
            slider.value += points;
            scoreText.text = slider.value.ToString() + "/2000";
        }
        else if ((slider.value + points) > 2000)
        {
            Debug.Log("level plus de 2000");
            LevelUp();
            slider.value = points - (slider.maxValue - slider.value);
            scoreText.text = slider.value.ToString() + "/2000";
        }
    }

    public void SetStellas(int stellas)
    {
        stellasText.text += stellas.ToString();

    }

    public void LevelUp()
    {
        level++;

        levelText.text = level.ToString();
    }
}
