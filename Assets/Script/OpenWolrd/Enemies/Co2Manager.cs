using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Co2Manager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        Destroy(gameObject, 2);
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag == "Player")
        {
            StartCoroutine(FreezePlayer(1f, collision));
        }
    }

    IEnumerator FreezePlayer(float time, Collision collision)
    {
        Rigidbody player_rb = collision.gameObject.GetComponent<Rigidbody>();
        player_rb.constraints = RigidbodyConstraints.FreezePosition;

        yield return new WaitForSeconds(time);
        player_rb.constraints = RigidbodyConstraints.None;
        player_rb.constraints = RigidbodyConstraints.FreezeRotation;
        Destroy(gameObject);
    }
}
