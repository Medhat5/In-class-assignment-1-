#include "SimpleClass.h"
int SimpleClass::SimpleFunction()
{
	return 1;
}


int SimpleClass::save(float xPosition, float yPosition, float zPosition)
{
	std::ofstream textfile;

	textfile.open("SimpleClass.txt");

	if (textfile.is_open())
	{
		textfile << xPosition << std::endl;
		textfile << yPosition << std::endl;
		textfile << zPosition << std::endl;
							 
	}

	textfile.close();
	return 1;
}

Vec3 SimpleClass::load()
{
	std::ifstream textfile;

	textfile.open("SimpleClass.txt");

	if (textfile.is_open())
	{
		textfile >> location.x;
		textfile >> location.y;
		textfile >> location.z;

	}

	textfile.close();

	return location;
}


