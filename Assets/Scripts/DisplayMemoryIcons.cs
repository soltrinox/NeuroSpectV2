using System.Collections.Generic;
using System.Collections;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class DisplayMemoryIcons : MonoBehaviour
{
    public List<Texture2D> allImgs;

    public static List<Texture2D> chosenList = new List<Texture2D>();
    private List<int> chosenNums = new List<int>();

    private Sprite mySprite;
    private SpriteRenderer[] sr;
    public List<GameObject> gameObjects;

    public GameObject canvas;

    public int subCategs(string imgName, List<Texture2D> list)
    {
        int count = 0;
        string[] categ = imgName.Split('-');

        if (list.Count > 0)
        {
            foreach (Texture2D tex in list)
            {
                string[] categ2 = tex.ToString().Split('-');
                if (categ[2].Equals(categ2[2]))
                {
                    count++;
                }
            }
        }

        return count;
    }

    void Start()
    {
        for (int i = 0; i < allImgs.Count; i++)
        {
            chosenNums.Add(i);
        }
        

        //Selecting 30 Unique Random Images from set of Images
        for (int num = 0; num < 30; num++)
        {
            int randNum = Random.Range(0, allImgs.Count);
            if(!chosenNums.Contains(randNum))
            {
                num--;
                continue;
            } else
            {
                if (subCategs(allImgs[randNum].ToString(), chosenList) >= 2)
                {
                    Debug.Log(subCategs(allImgs[randNum].ToString(), chosenList));
                    num--;
                    continue;
                }
                else
                {
                    chosenList.Add(allImgs[randNum]);
                    chosenNums.Remove(randNum);
                }
            }
        }

        sr = new SpriteRenderer[gameObjects.Count];
 
        for(int j = 0; j < gameObjects.Count; j++)
        {
            sr[j] = gameObjects[j].AddComponent<SpriteRenderer>() as SpriteRenderer;
        }

        //Changing Image Position Depending on Image Index 
        for (int index = 0; index < chosenList.Count; index++) {
            mySprite = Sprite.Create(chosenList[index], new Rect(0.0f, 0.0f, chosenList[index].width, chosenList[index].height), new Vector2(0.0f, 0.0f));
            sr[index].sprite = mySprite;
        }
    }

    void Update()
    {

        float ratio = (float) Screen.width / (float) Screen.height;

        Debug.Log(Screen.width + ", " + Screen.height + ", " + ratio);

        if (ratio < (1522f / 676f))
        {
            if (Screen.width > 1522f)
            {
                canvas.transform.localScale = new Vector3(1522f / Screen.width, 1522f / Screen.width, 1f);
            }
        } else
        {
            canvas.transform.localScale = new Vector3(Screen.width / 1522f, Screen.width / 1522f, 1f);
        }
    }
}
