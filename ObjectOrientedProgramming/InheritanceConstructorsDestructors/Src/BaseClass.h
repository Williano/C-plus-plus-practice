#pragma once

#include <iostream>


class BaseClass
{
public:

	BaseClass()
	{
		std::cout << "The is the BaseClass constructor.\n";
	}

	~BaseClass()
	{
		std::cout << "This is the BaseClass destructor.\n";
	}
};
