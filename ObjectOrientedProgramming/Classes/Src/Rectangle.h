#pragma once

class Rectangle
{
private:
	double m_width;
	double m_length;

public:
	Rectangle(double rectWidth, double rectLength); // Constructor
	void setWidth(double rWidth);
	void setLength(double rLength);

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