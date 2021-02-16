#pragma once

#include <iostream>


class Base
{
public:

	virtual void functionA(long arg) const
	{
		std::cout << "This is Derived::functionA" << std::endl;
	}


};
