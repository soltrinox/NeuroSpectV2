using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class ShapeSpawner : MonoBehaviour
{
    private float nextUpdate = 0;
    private bool beginSpawn = false;
    private float timeOfAppearance = 3f;
    private float timeShown = 3f;
    private float factorOfDecrease;
    private int iterations = -1;
    private bool firstIter = false;
    private bool choiceSelected = false;
    private bool textAppear = false;
    private float timeOfText = 0.0f;

    public List<GameObject> arrayOfShapes;
    public GameObject shape1;
    public GameObject shape2;
    public Text correctText;
    public Text wrongText;

    public GameObject shape1Obj;
    public GameObject shape2Obj;
    private Color color1;
    private Color color2;

    public int randInt1;
    public int randInt2;

    private static List<int> correct = new List<int>();
    private static List<int> wrong = new List<int>();
    private static List<int> timesUp = new List<int>();

    public static List<string> attention_data = new List<string>();

    public static List<int>[] returnScore()
    {
        List<int>[] finalScore = new List<int>[3];

        finalScore[0] = correct;
        finalScore[1] = wrong;
        finalScore[2] = timesUp;

        return finalScore;
    }

    public IEnumerator WaitForSpawn()
    {
        yield return new WaitForSeconds(5f);
        beginSpawn = true;
    }

    public void SpawnShapes()
    {
        randInt1 = Random.Range(0, arrayOfShapes.Count);
        randInt2 = Random.Range(0, arrayOfShapes.Count);
        shape1Obj = Instantiate(arrayOfShapes[randInt1], shape1.transform.position, shape1.transform.rotation);
        shape2Obj = Instantiate(arrayOfShapes[randInt2], shape2.transform.position, shape2.transform.rotation);
        color1 = shape1Obj.GetComponent<SpriteRenderer>().color;
        color2 = shape2Obj.GetComponent<SpriteRenderer>().color;
    }

    void Start()
    {
        factorOfDecrease = (1.25f - 0.032f) / 25;
        for(int i = 0; i < 25; i++)
        {
            correct.Add(0);
            wrong.Add(0);
            timesUp.Add(0);
        }

        //Iteration, Left_Shape, Left_Color, Right_Shape, Right_Color, Is_same, Response, Is_Correct, Time_Shown, Time_To_Click

        correctText.gameObject.SetActive(false);
        wrongText.gameObject.SetActive(false);

        StartCoroutine(WaitForSpawn());
    }

    string return_shape(int randint)
    {
        string shape = "";
        if(randint % 4 == 0)
        {
            shape = "Capsule";
        } else if(randint % 4 == 1)
        {
            shape = "Circle";
        } else if(randint % 4 == 2)
        {
            shape = "Diamond";
        } else if(randint % 4 == 3)
        {
            shape = "Square";
        }

        return shape;
    }
    string return_color(int randint)
    {
        string shape = "";
        if ((int) (randint / 4) == 0)
        {
            shape = "Blue";
        }
        else if ((int) (randint / 4) == 1)
        {
            shape = "Green";
        }
        else if ((int) (randint / 4) == 2)
        {
            shape = "Orange";
        }

        return shape;
    }

    void Update()
    {
        if(iterations == 4)
        {
            Debug.Log("Here");
            if(correct[0] >= 2)
            {
                timeOfAppearance = 1.25f;
                timeShown = 1.5f;
            } else if(correct[0] < 2)
            {
                SceneManager.LoadScene(7);
            }
        }

        if(timeOfText >= 0.75f)
        {
            timeOfText = 0;
            textAppear = false; 
            correctText.gameObject.SetActive(false);
            wrongText.gameObject.SetActive(false);
        }
        if (iterations < 100 && beginSpawn)
        {
            if (Input.GetKeyDown(KeyCode.A) && !choiceSelected)
            {
                if (color1.Equals(color2))
                {
                    correct[iterations / 4] += 1;
                    choiceSelected = true;
                    textAppear = true;
                    correctText.gameObject.SetActive(true);

                    Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,True,True,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString());

                    attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1) 
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,True,True," 
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
                } else if (!color1.Equals(color2))
                {
                    wrong[iterations / 4] += 1;
                    choiceSelected = true;
                    textAppear = true;
                    wrongText.gameObject.SetActive(true);

                    Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,True,False,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString());

                    attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,True,False,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
                }
            } else if (Input.GetKeyDown(KeyCode.D) && !choiceSelected)
            {
                if (color1.Equals(color2))
                {
                    wrong[iterations / 4] += 1;
                    choiceSelected = true;
                    textAppear = true;
                    wrongText.gameObject.SetActive(true);

                    Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,False,False,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString());

                    attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "True,False,False,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
                } else if (!color1.Equals(color2))
                {
                    correct[iterations / 4] += 1;
                    choiceSelected = true;
                    textAppear = true;
                    correctText.gameObject.SetActive(true);

                    Debug.Log(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,False,True,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString());

                    attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + "False,False,True,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
                }
            }

            if(textAppear)
            {
                timeOfText += Time.deltaTime;
            }

            if (iterations % 4 == 0 && firstIter)
            {
                Debug.Log(timeOfAppearance + ", " + iterations);

                timeOfAppearance -= factorOfDecrease;
                firstIter = false;
            }

            if (beginSpawn && nextUpdate >= timeOfAppearance)
            {
                Destroy(shape1Obj);
                Destroy(shape2Obj);
            }

            if (beginSpawn && nextUpdate < timeShown)
            {
                nextUpdate += Time.deltaTime;
            }
            else if (beginSpawn && nextUpdate >= timeShown)
            {
                if (!Input.GetKeyDown(KeyCode.A) && !Input.GetKeyDown(KeyCode.D) && !choiceSelected && iterations >= 0)
                {
                    timesUp[iterations / 4] += 1;

                    bool equal = return_shape(randInt1).Equals(return_shape(randInt2));

                    attention_data.Add(iterations + "," + return_shape(randInt1) + "," + return_color(randInt1)
                                        + "," + return_shape(randInt2) + "," + return_color(randInt2) + "," + equal.ToString() + ",Null,False,"
                                        + timeOfAppearance.ToString() + "," + nextUpdate.ToString() + "\n");
                }
                iterations++;
                if (iterations < 100)
                {
                    SpawnShapes();
                }
                choiceSelected = false;
                nextUpdate = 0;
                firstIter = true;
            }
        }
        else if (iterations >= 100)
        {
            DataStorage._attentionData = attention_data;
            SceneManager.LoadScene(8);
        }
    }
}
 