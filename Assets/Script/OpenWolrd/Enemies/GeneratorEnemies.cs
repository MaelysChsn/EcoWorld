using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GeneratorEnemies : MonoBehaviour
{
    public static GeneratorEnemies instance;
    public GameObject enemy;
    public int xPos;
    public int zPos;
    public int enemyCount;

    void Awake()
    {
        if (instance == null) instance = this;
    }

    public void GenerateEnemies()
    {
        StartCoroutine(EnemyDrop());
    }

    IEnumerator EnemyDrop()
    {
        while(enemyCount < 10)
        {
            xPos = Random.Range(92, 160);
            zPos = Random.Range(54, 130);
            Instantiate(enemy, new Vector3(xPos, 0, zPos), Quaternion.identity);
            yield return new WaitForSeconds(0.1f);
            enemyCount += 1;
        }
    }

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
