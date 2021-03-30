using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Intro : MonoBehaviour
{

    private bool changeScene = false;

    IEnumerator Delay()
    {
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
