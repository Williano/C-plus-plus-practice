// StaticLocalVariable.cpp : This program demonstrates static local variables.
//

#include <iostream>

// Function prototype
void showStatic();

int main()
{

	for (int count = 0; count < 5; count++)
	{
		showStatic();
	}

	std::cin.get();

	return 0;
}

void showStatic()
{
	static int statNum;

	std::cout << "statNum is " << statNum << std::endl;

	statNum++;
}