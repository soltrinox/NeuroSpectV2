using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class EncInstr : MonoBehaviour
{
    public List<Texture2D> chosenList;

    private GameObject currObj;
    private float timePassed = 0;
    private int objNum = 0;

    private Sprite mySprite;
    private SpriteRenderer[] sr;
    public List<GameObject> gameObjects;

    private const float width = 92.0f;
    private const float height = 34.0f;

    private const float centerX = -9.5f;
    private const float centerY = -8.5f;

    // Start is called before the first frame update
    void Start()
    {
        sr = new SpriteRenderer[gameObjects.Count];

        for (int j = 0; j < gameObjects.Count; j++)
        {
            sr[j] = gameObjects[j].AddComponent<SpriteRenderer>() as SpriteRenderer;
        }

        //Changing Image Position Depending on Image Index 
        for (int index = 0; index < chosenList.Count; index++)
        {
            //Vector3 shift = new Vector3((widthVal / -2.0f) + (widthVal * ((0.4f + (index % 6)) / 6.0f)), (height / 2.0f) - (height * (index / 6) / 4.5f) - 3.0f, 0.0f);
            Vector3 shift = new Vector3(0.0f, 0.0f, 0.0f);
            mySprite = Sprite.Create(chosenList[index], new Rect(0.0f, 0.0f, chosenList[index].width, chosenList[index].height), new Vector2(0.0f, 0.0f));
            sr[index].sprite = mySprite;
            gameObjects[index].transform.position += shift;
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (timePassed < 1.0f)
        {
            timePassed += Time.deltaTime;
        }

        if (objNum >= 4 && timePassed >= 1.0f)
        {
            SceneManager.LoadScene(4);

        } else if(objNum < 4)
        {
            if (timePassed >= 1.0f && timePassed < 2.0f)
            {
                timePassed += Time.deltaTime;

                float valIncrease = 5f - (objNum * 5);

                Vector3 posTo = new Vector3(valIncrease * Time.deltaTime, -2.5f * Time.deltaTime, -10 * Time.deltaTime);

                gameObjects[objNum].transform.localScale += new Vector3(Time.deltaTime, Time.deltaTime);

                gameObjects[objNum].transform.position += posTo;
            }
            else if (timePassed >= 2.0f && timePassed < 3.0f)
            {
                timePassed += Time.deltaTime;
            }
            else if (timePassed >= 3.0f && timePassed < 4.0f)
            {
                float valIncrease = 5f - (objNum * 5);

                timePassed += Time.deltaTime;
                Vector3 posTo = new Vector3(valIncrease * Time.deltaTime, -2.5f * Time.deltaTime, -10 * Time.deltaTime);
                gameObjects[objNum].transform.localScale += new Vector3(-1 * Time.deltaTime, -1 * Time.deltaTime, 0.0f);
                gameObjects[objNum].transform.position -= posTo;
            }
            else if (timePassed >= 4.0f)
            {
                timePassed = 0.0f;
                objNum++;
            }
        }
    }
}
