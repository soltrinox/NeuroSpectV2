using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Runtime.InteropServices;

public class DisplayScore : MonoBehaviour
{

    public Text attentionText;
    public Text recallText;

    public Text code;

    private string info;

    [DllImport("__Internal")]
    private static extern void CheckCode(string tableName, string code);
    [DllImport("__Internal")]
    private static extern void InsertData(string tableName, string code, 
        string age, string race, string gender, string attentionData, string recallData);

    public void StringCallbackCode(string info)
    {
        this.info = info;
    }

    public void StringCallback(string info)
    {
        Debug.Log(info);
    }


    void Start()
    {
        List<int>[] attentionScoreTotal = ShapeSpawner.returnScore();
        int[] recallScoreTotal = RecallGame.returnScore();

        int attentionScore = 0;
        foreach(int num in attentionScoreTotal[0])
        {
            attentionScore += num;
        }

        System.Random generator = new System.Random();
        //string codeStr = generator.Next(100000, 1000000).ToString("D6");

        string codeStr = "555555";

        int recallScore = recallScoreTotal[0];

        attentionText.text = "Attention: You're Final Score was " + attentionScore + "/100!";
        recallText.text = "Recall: You're Final Score was " + recallScore + "/30!";


        List<string> attentionData = DataStorage._attentionData;
        List<string> recallData = DataStorage._recallData;
        string age = DataStorage._age;
        string race = DataStorage._race;
        string gender = DataStorage._gender;

        string attention = "";
        string recall = "";

        foreach(string a in attentionData)
        {
            attention += (a + "\n");
        }
        foreach (string r in recallData)
        {
            recall += (r + "\n");
        }

        if (Application.platform == RuntimePlatform.WebGLPlayer) {
            CheckCode("userdata", codeStr);
            while (info.Equals("true"))
            {
                Debug.Log(codeStr + ", " + info);
                codeStr = generator.Next(100000, 1000000).ToString("D6");
                CheckCode("userdata", codeStr);
            }
            InsertData("userdata", codeStr, age, race, gender, attention, recall);
        }


    }
}
