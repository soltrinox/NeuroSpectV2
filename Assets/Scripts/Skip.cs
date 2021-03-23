using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Skip : MonoBehaviour
{
    public void onClickEnc()
    {
        SceneManager.LoadScene(5);
    }

    public void onClickAttention()
    {
        SceneManager.LoadScene(8);
    }

    public void onClickRecall()
    {
        SceneManager.LoadScene(10);
    }
}
