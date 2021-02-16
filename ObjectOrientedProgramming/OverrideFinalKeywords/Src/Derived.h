#pragma once

#include <iostream>
#include "Base.h"


class Derived :public Base
{
public:

	virtual void functionA(long arg) const override
	{
		std::cout << "This is Derived::funtionA" << std::endl;
	}
};
