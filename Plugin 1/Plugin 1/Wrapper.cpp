#include "Wrapper.h"
SimpleClass simpleClass;
int SimpleFunction()
{
	return simpleClass.SimpleFunction();
}

PLUGIN_API int save(float xPosition, float yPosition, float zPosition)
{
	return simpleClass.save(xPosition, yPosition, zPosition);
}

PLUGIN_API Vec3 load()
{
	return simpleClass.load();
}

