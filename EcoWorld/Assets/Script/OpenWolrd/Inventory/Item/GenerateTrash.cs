using UnityEngine;
using System.Collections;

public class GenerateTrash : MonoBehaviour
{
    public GameObject[] trash;
    public int xPos;
    public int zPos;
    public int trashCount;

    void Awake()
    {
        GeneratorTrash();
    }

    //
    public void GeneratorTrash()
    {
        StartCoroutine(TrashDrop());
    }

    //Génération des déchets dans le monde aléatoirement
    IEnumerator TrashDrop()
    {
        while (trashCount < 35)
        {
            xPos = Random.Range(-12, 96);
            zPos = Random.Range(537, 263);
            Instantiate(trash[Random.Range(0, trash.Length)], new Vector3(xPos, 0, zPos), Quaternion.identity);
            yield return new WaitForSeconds(0.1f);
            trashCount += 1;
        }
    }
}
