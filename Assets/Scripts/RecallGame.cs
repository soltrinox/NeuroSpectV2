using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Linq;
using TMPro;
using UnityEngine.Events;
using UnityEngine.EventSystems;

public class RecallGame : MonoBehaviour
{
    private bool startGame = false;
    private float timeLeft = 5f;
    private float widthDec = 0.0f;

    public List<Button> allButtons = new List<Button>();
    public GameObject timerBar;
    private int iteration = 0;

    private Texture2D correctImg;
    private Texture2D clickedImg;

    private int correctButton = 0;
    private bool selected = false;

    public List<Texture2D> allImgs;
    private List<Texture2D> chosenList;
    private List<Texture2D> notChosen = new List<Texture2D>();

    private static int numCorrect = 0;
    private static int numWrong = 0;
    private static int numTimesUp = 0;

    public static List<string> recall_data = new List<string>();

    public static int[] returnScore()
    {
        int[] finalScore = new int[3];

        finalScore[0] = numCorrect;
        finalScore[1] = numWrong;
        finalScore[2] = numTimesUp;

        return finalScore;
    }

    IEnumerator Delay()
    {
        yield return new WaitForSeconds(5.0f);
        startGame = true;
    }

   void onClick(Button clickedButton)
    {
        selected = true;
        clickedImg = clickedButton.GetComponent<Image>().sprite.texture;

        Debug.Log(clickedImg.ToString() + ", " + correctImg.ToString());

        if (clickedButton.GetComponent<Image>().sprite.texture.ToString().Equals(correctImg.ToString()))
        {
            numCorrect++;
        } else
        {
            numWrong++;
        }
    }

    void Instantiate()
    {
        foreach(Button button in allButtons)
        {
            button.gameObject.SetActive(true);
        }

        List<Button> buttonList = allButtons;
        List<Texture2D> displayedImgs = new List<Texture2D>();
        List<int> orderOfImgs = new List<int>{ 0, 1, 2, 3, 4, 5 };

        Debug.Log(iteration + ": Beginning");

        //Add 1 Correct Img
        correctImg = chosenList[iteration];

        string[] categorizationCorrect = correctImg.ToString().Split('-');

        Debug.Log(iteration + ": Add Correct Img");

        //Add 2 Same Sub-Category Img
        List<Texture2D> sameSubCateg = new List<Texture2D>();
        foreach(Texture2D img in notChosen)
        {
            string[] categorization = img.ToString().Split('-');

            if(categorization[0].Equals(categorizationCorrect[0]) && categorization[1].Equals(categorizationCorrect[1]) && categorization[2].Equals(categorizationCorrect[2]))
            {
                {
                    sameSubCateg.Add(img);
                }
            }
        }

        Debug.Log(iteration + ": Find Sub Categs");
        Debug.Log(correctImg.ToString());
        Debug.Log("Num of sub categs: " + sameSubCateg.Count);

        int rand1 = Random.Range(0, sameSubCateg.Count);
        int rand2 = Random.Range(0, sameSubCateg.Count);

        while(rand2 == rand1)
        {
            rand2 = Random.Range(0, sameSubCateg.Count);
        }

        displayedImgs.Add(sameSubCateg[rand1]);
        displayedImgs.Add(sameSubCateg[rand2]);
        displayedImgs.Add(correctImg);

        Debug.Log(iteration + ": Choose Sub Categs");

        //Add 1 Same Category Img
        List<Texture2D> sameCateg = new List<Texture2D>();
        foreach (Texture2D img in notChosen)
        {
            string[] categorization = img.ToString().Split('-');

            if (categorization[0].Equals(categorizationCorrect[0]) && categorization[1].Equals(categorizationCorrect[1]) && !categorization[2].Equals(categorizationCorrect[2]))
            {
                {
                    sameCateg.Add(img);
                }
            }
        }

        Debug.Log(iteration + ": Find Categs");

        displayedImgs.Add(sameCateg[Random.Range(0, sameCateg.Count)]);

        Debug.Log(iteration + ": Choose Categs");

        //Add 1 Same Category Img
        List<Texture2D> sameGeneral = new List<Texture2D>();
        foreach (Texture2D img in notChosen)
        {
            string[] categorization = img.ToString().Split('-');

            if (categorization[0].Equals(categorizationCorrect[0]) && !categorization[1].Equals(categorizationCorrect[1]) && !categorization[2].Equals(categorizationCorrect[2]))
            {
                {
                    sameGeneral.Add(img);
                }
            }
        }

        Debug.Log(iteration + ": Find Generals");

        displayedImgs.Add(sameGeneral[Random.Range(0, sameGeneral.Count)]);

        Debug.Log(iteration + ": Choose Generals");

        //Add 1 Different Category Img
        List<Texture2D> different = new List<Texture2D>();
        foreach (Texture2D img in notChosen)
        {
            string[] categorization = img.ToString().Split('-');

            if (!categorization[0].Equals(categorizationCorrect[0]) && !categorization[1].Equals(categorizationCorrect[1]) && !categorization[2].Equals(categorizationCorrect[2]))
            {
                {
                    different.Add(img);
                }
            }
        }

        Debug.Log(iteration + ": Find Other");

        displayedImgs.Add(different[Random.Range(0, different.Count)]);

        Debug.Log(iteration + ": Choose Other");



        //Assigning Imgs to Buttons
        orderOfImgs = orderOfImgs.OrderBy(x => Random.value).ToList();

        for(int i = 0; i < displayedImgs.Count; i++)
        {
            Texture2D element1 = displayedImgs[i];
            Texture2D element2 = displayedImgs[orderOfImgs[i]];

            displayedImgs[i] = displayedImgs[orderOfImgs[i]];
            displayedImgs[orderOfImgs[i]] = element1;
        }


        for (int i = 0; i < allButtons.Count; i++)
        {
            allButtons[i].GetComponent<Image>().sprite = Sprite.Create(displayedImgs[i], new Rect(0.0f, 0.0f, displayedImgs[i].width, displayedImgs[i].height), new Vector2(0.0f, 0.0f));
        }

        for (int i = 0; i < allButtons.Count; i++)
        {
            if (allButtons[i].GetComponent<Image>().sprite.texture.ToString().Equals(correctImg.ToString()))
            {
                correctButton = i;
                break;
            }
        }

        int index = 0;
        foreach (Button button in allButtons)
        {
            button.onClick.AddListener(() => onClick(button));
            index++;
        }
    }

    void Start()
    {   
        widthDec = timerBar.transform.localScale.x / 4;
        this.chosenList = DisplayMemoryIcons.chosenList;

        foreach (Button button in allButtons)
        {
            button.gameObject.SetActive(false);
        }

        foreach (Texture2D img in this.allImgs)
        {
            if(!chosenList.Contains(img))
            {
                notChosen.Add(img);
            }
        }

        //Iter, Gen_Categ_Correct, Categ_Correct, Sub_Categ_Correct, Img_Correct, Gen_Categ_Clicked, Categ_Clicked, Sub_Categ_Clicked, Img_Clicked, Is_Correct, Time_To_Click

        StartCoroutine(Delay());
    }

    // Update is called once per frame
    void Update()
    {
        if (startGame && iteration < chosenList.Count)
        {
            if (timeLeft < 4f && !selected && iteration < 30)
            {
                timeLeft += Time.deltaTime;
                timerBar.transform.localScale -= new Vector3(Time.deltaTime * widthDec, 0.0f, 0.0f);
            } else if(timeLeft < 4f && selected && iteration < 30)
            {
                string[] categorizationClicked = clickedImg.ToString().Split('-');
                string[] categorizationCorrect = correctImg.ToString().Split('-');
                bool correct = clickedImg.ToString().Equals(correctImg.ToString());

                recall_data.Add(iteration + "," + categorizationCorrect[0] + "," + categorizationCorrect[1] + "," + categorizationCorrect[2]
                                + "," + categorizationCorrect[3] + "," + categorizationClicked[0] + "," + categorizationClicked[1] + "," 
                                + categorizationClicked[2] + "," + categorizationClicked[3] + "," + correct.ToString() + "," + timeLeft.ToString() + "\n");

                timeLeft = 4f;

                foreach(Button button in allButtons)
                {
                    button.onClick.RemoveAllListeners();
                }
            } else if(timeLeft >= 4f && timeLeft < 5f && !selected && iteration < 30)
            {
                numTimesUp++;

                selected = true;
            }
            else if(timeLeft >= 4f && timeLeft < 5f && selected && iteration < 30)
            {
                timeLeft += Time.deltaTime;
            } else if(timeLeft >= 5f && iteration < 30)
            {
                if(!selected && iteration > 0)
                {
                    string[] categorizationCorrect = correctImg.ToString().Split('-');
                    recall_data.Add(iteration + "," + categorizationCorrect[0] + "," + categorizationCorrect[1] + "," + categorizationCorrect[2]
                                + "," + categorizationCorrect[3] + "," + "Null" + "," + "Null" + "," +
                                "," + "Null" + "," + "Null" + "," + "False" + "," + timeLeft.ToString() + "\n");
                }

                selected = false;

                foreach (Button button in allButtons)
                {
                    button.gameObject.SetActive(false);
                }

                timeLeft = 0;
                timerBar.transform.localScale = new Vector3(widthDec * 4, timerBar.transform.localScale.y, 1.0f);


                Instantiate();

                iteration++;
            }
        } else if(iteration >= 30)
        {
            DataStorage._recallData = recall_data;
            SceneManager.LoadScene(10);
        }
    }
}