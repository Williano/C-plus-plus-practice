#pragma once

#include <iostream>
#include "BaseClass.h"


class DerivedClass : public BaseClass
{
public:

	DerivedClass()
	{
		std::cout << "This is the DerivedClass constructor.\n";
	}

	~DerivedClass()
	{
		std::cout << "This is the DerivedClass destructor.\n";
	}
};
