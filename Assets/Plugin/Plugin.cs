using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class Plugin : MonoBehaviour
{
    const string DLL_NAME = "Plugin 1";
    [DllImport(DLL_NAME)]
    private static extern int SimpleFunction();
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.K))
        {
            Debug.Log(SimpleFunction());
        }
    }
}