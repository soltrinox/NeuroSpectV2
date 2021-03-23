using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class StartMemGame : MonoBehaviour
{
    public List<GameObject> gameObjs;
    private bool delayComplete = false;
    private float timePassed = 0;
    private int processNum = 0;

    private List<GameObject> objsWithoutCurr = new List<GameObject>();

    private Vector3 pos;

    void Start()
    {
        pos = gameObjs[0].transform.position;
        StartCoroutine(Delay());
    }

    public IEnumerator Delay()
    {
        yield return new WaitForSeconds(1f);
        delayComplete = true;

        objsWithoutCurr = gameObjs;
    }

    public void Update()
    {

        if (delayComplete && processNum < 60)
        {
            int objNum = (int)processNum / 2;
            if (processNum % 2 == 0)
            {

                gameObjs[objNum].transform.position -= pos * Time.deltaTime;
                gameObjs[objNum].transform.position += new Vector3(0, 0, -9f) * Time.deltaTime;
                gameObjs[objNum].transform.localScale += new Vector3(1f, 1f, 1f) * Time.deltaTime;

                timePassed += Time.deltaTime;
                if(timePassed >= 1f)
                {
                    processNum++;
                    timePassed = 0;
                    delayComplete = false;
                }
            } else if(processNum % 2 == 1)
            {
                gameObjs[objNum].transform.position += pos * Time.deltaTime;
                gameObjs[objNum].transform.position -= new Vector3(0, 0, -9f) * Time.deltaTime;
                gameObjs[objNum].transform.localScale -= new Vector3(1f, 1f, 1f) * Time.deltaTime;

                timePassed += Time.deltaTime;

                if (timePassed >= 1.0f)
                {
                    processNum++;
                    delayComplete = false;
                    timePassed = 0;
                }
            }
        } else if(!delayComplete && processNum >= 60)
        {
            SceneManager.LoadScene(5);
        } else if(!delayComplete && processNum < 60)
        {
            timePassed += Time.deltaTime;
            if(timePassed >= 1.0f)
            {
                if (processNum % 2 == 0)
                {
                    pos = gameObjs[processNum / 2].transform.position;
                }

                timePassed = 0;
                delayComplete = true;
            }
        }
    }
}
