#include <iostream>
#include "Cube.h"


int main()
{
	double cubeWidth;
	double cubeLength;
	double cubeHeight;


	std::cout << "Enter the dimensions of a cube:\n";

	std::cout << "Width: ";
	std::cin >> cubeWidth;

	std::cout << "Length: ";
	std::cin >> cubeLength;

	std::cout << "Height: ";
	std::cin >> cubeHeight;


	Cube myCube(cubeWidth, cubeLength, cubeHeight);

	std::cout << "Here are the cube's properties:\n";

	std::cout << "Width: " << myCube.getWidth() << std::endl;

	std::cout << "Length: " << myCube.getLength() << std::endl;

	std::cout << "Height: " << myCube.getHeight() << std::endl;

	std::cout << "Base area: " << myCube.getArea() << std::endl;

	std::cout << "Volume: " << myCube.getVolume() << std::endl;


	return 0;

}
