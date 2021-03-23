using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Intro : MonoBehaviour
{

    public GameObject obj;

    private bool changeScene = false;

    IEnumerator Delay()
    {
        Color col = obj.GetComponent<SpriteRenderer>().color;

        yield return new WaitUntil(() => col.a == 1);
        yield return new WaitForSeconds(5f);
        changeScene = true;
        
    }

    void Start()
    {
        StartCoroutine(Delay());
    }

    void Update()
    {
        if(changeScene)
        {
            SceneManager.LoadScene(2);
        }
    }
}
