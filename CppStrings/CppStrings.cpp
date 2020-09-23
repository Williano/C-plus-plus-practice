// CppStrings.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

int main()
{
	char name[] = "Thomas Edison";
	unsigned int length = strlen(name);
	char* i = strstr(name, "Edison");

	std::cout << i << std::endl;

	std::cin.get();

	return 0;
}

