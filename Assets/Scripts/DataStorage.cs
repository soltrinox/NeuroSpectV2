using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataStorage : MonoBehaviour
{
    public static List<Texture2D> _chosenList;
    public static int _finalScoreAttention;
    public static int _finalScoreRecall;
    public static List<string> _attentionData;
    public static List<string> _recallData;

    public static string _age;
    public static string _gender;
    public static string _race;

    public List<Texture2D> chosenList { 
        get
        {
            return _chosenList;
        }

        set
        {
            _chosenList = value;
        } 
    }
    public int finalScoreAttention
    {
        get
        {
            return _finalScoreAttention;
        }

        set
        {
            _finalScoreAttention = value;
        }
    }
    public int finalScoreRecall
    {
        get
        {
            return _finalScoreRecall;
        }

        set
        {
            _finalScoreRecall = value;
        }
    }
    public List<string> attentionData
    {
        get
        {
            return _attentionData;
        }

        set
        {
            _attentionData = value;
        }
    }
    public List<string> recallData
    {
        get
        {
            return _recallData;
        }

        set
        {
            _recallData = value;
        }
    }
}
