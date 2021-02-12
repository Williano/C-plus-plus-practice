#pragma once


class Rectangle
{
private:
	double m_width;
	double m_length;

public:

	Rectangle()
	{
		m_width = 0.0;
		m_length = 0.0;
	}

	Rectangle(double width, double length) : m_width(width), m_length(length) {}

	double getWidth() const
	{
		return m_width;
	}

	double getLength() const
	{
		return m_length;
	}

	double getArea() const
	{
		return m_width * m_length;
	}
};
