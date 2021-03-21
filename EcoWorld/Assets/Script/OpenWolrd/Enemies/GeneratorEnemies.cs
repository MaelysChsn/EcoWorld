using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeneratorEnemies : MonoBehaviour
{
    public static GeneratorEnemies instance;
    public GameObject enemy;
    public int xPos;
    public int zPos;
    int yPos;
    public int enemyCount;

    void Awake()
    {
        if (instance == null) instance = this;
    }

    public void GenerateEnemies()
    {
        StartCoroutine(EnemyDrop());
    }

    //Génération des enemies dans le monde aléatoirement
    IEnumerator EnemyDrop()
    {
        while(enemyCount < 10)
        {
            xPos = Random.Range(-36, 120);
            yPos = 20;
            zPos = Random.Range(435, 200);
            Instantiate(enemy, new Vector3(xPos, yPos, zPos), Quaternion.identity);
            yield return new WaitForSeconds(0.1f);
            enemyCount += 1;
        }
    }

    //Destrcution des enemies dans le monde
    public void EnemyRemove()
    {
        foreach(EnemiesManager enemy in FindObjectsOfType<EnemiesManager>())
        {
            Destroy(enemy.gameObject);
        }
        enemyCount = 0;
        xPos = 0;
        zPos = 0;
    }
}
