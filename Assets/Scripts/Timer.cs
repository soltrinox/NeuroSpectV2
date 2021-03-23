using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Timer : MonoBehaviour
{

    public GameObject timerBar;
    public Vector3 currScale;

    public float maxTime = 1.5f;

    public IEnumerator DelayBetween()
    {
        yield return new WaitForSeconds(2f);
    }

    // Start is called before the first frame update
    void Start()
    {
        currScale = timerBar.transform.localScale;
    }

    // Update is called once per frame
    void Update()
    {
        float ratio = (Time.deltaTime / maxTime);
        if (timerBar.transform.localScale.x > 0)
        {
            Vector3 scaleChange = new Vector3(ratio * currScale.x, 0.0f, 0.0f);
            timerBar.transform.localScale -= scaleChange;
        } else {
            timerBar.transform.localScale = currScale;
            StartCoroutine(DelayBetween());
        }
    }
}
