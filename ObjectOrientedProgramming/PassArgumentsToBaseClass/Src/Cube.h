#pragma once

#include "Rectangle.h"


class Cube : public Rectangle
{
protected:
	double m_height;
	double m_volume;

public:
	Cube() : Rectangle()
	{
		m_height = 0.0;
		m_volume = 0.0;
	}

	Cube(double width, double length, double heigth) : Rectangle(width, length)
	{
		m_height = heigth;
		m_volume = getArea() * heigth;
	}

	double getHeight() const
	{
		return m_height;
	}

	double getVolume() const
	{
		return m_volume;
	}
};
