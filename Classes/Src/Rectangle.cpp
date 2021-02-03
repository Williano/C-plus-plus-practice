#include "Rectangle.h"
#include <iostream>
#include <cstdlib>


Rectangle::Rectangle(double rectWidth, double rectLength)
{
	m_width = rectWidth;
	m_length = rectLength;
}

void Rectangle::setWidth(double rWidth)
{
	if (rWidth >= 0)
	{
		m_width = rWidth;
	}
	else
	{
		std::cout << "Invalid width\n";
		exit(EXIT_FAILURE);
	}
}

void Rectangle::setLength(double rLength)
{
	if (rLength >= 0)
	{
		m_length = rLength;
	}
	else
	{
		std::cout << "Invalid lenght\n";
		exit(EXIT_FAILURE);
	}
}