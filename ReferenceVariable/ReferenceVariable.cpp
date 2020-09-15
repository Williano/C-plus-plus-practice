// ReferenceVariable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Function prototype
void doubleNum(int& refVar);

int main()
{
	int value = 4;

	std::cout << "In main, value is " << value << std::endl;
	std::cout << "Now calling doubleNum..." << std::endl;

	doubleNum(value);

	std::cout << "Now back in main. Value is " << value << std::endl;

	std::cin.get();

	return 0;
}

void doubleNum(int& refVar)
{
	refVar *= 2;
}
