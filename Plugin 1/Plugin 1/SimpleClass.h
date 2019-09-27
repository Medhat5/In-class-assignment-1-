#pragma once
#include "PluginSettings.h"

#include <iostream>
#include <fstream>
#include <string>

struct Vec3
{
	float x;
	float y;
	float z;
};


class PLUGIN_API SimpleClass
{
public:
	int SimpleFunction();

	int save(float xPosition, float yPosition, float zPosition);

	Vec3 load();
	Vec3 location;

};

