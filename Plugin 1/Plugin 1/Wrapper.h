#pragma once
#include "PluginSettings.h"
#include "SimpleClass.h"

#ifdef __cplusplus
extern "C"
{
#endif
	// Put your functions here
	PLUGIN_API int SimpleFunction();
	PLUGIN_API int save(float xPosition, float yPosition, float zPosition);
	PLUGIN_API Vec3 load();
#ifdef __cplusplus
}
#endif

