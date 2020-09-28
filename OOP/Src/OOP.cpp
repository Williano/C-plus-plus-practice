// OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Base Class declaration
class BaseClass
{
public:
	BaseClass()
	{
		std::cout << "This is the BaseClass constructor." << std::endl;
	}

	~BaseClass()
	{
		std::cout << "This is the BaseClass destructor." << std::endl;
	}
};

class DerivedClass : public BaseClass
{
public:
	DerivedClass()
	{
		std::cout << "This is the DerivedClass constructor." << std::endl;
	}

	~DerivedClass()
	{
		std::cout << "This is the DerivedClass destructor." << std::endl;
	}
};

int main()
{


	std::cout << "We will now define a DerivedClass object." << std::endl;

	DerivedClass object;

	std::cout << "The program is now going to end" << std::endl;

	return 0;
}

