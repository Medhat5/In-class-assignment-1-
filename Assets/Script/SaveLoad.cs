using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Runtime.InteropServices;
public class SaveLoad : MonoBehaviour
{
    const string DLL_NAME = "SimplePlugin";
    [DllImport(DLL_NAME)]
    private static extern int save(float xPosition, float yPosition, float zPosition);
    [DllImport(DLL_NAME)]
    private static extern Vector3 load();

    Vector3 location;

    void Update()
    {
        if (Input.GetKeyDown(KeyCode.M))
        {
            float x = transform.localPosition.x;
            float y = transform.localPosition.y;
            float z = transform.localPosition.z;

            save(x, y, z);
        }

        if (Input.GetKeyDown(KeyCode.F))
        {
            location = load();
            transform.localPosition = location;
        }
    }
}


