#pragma once

class Rectangle
{
private:
	double width;
	double length;

public:
	Rectangle(double, double); // Constructor
	void setWidth(double);
	void setLength(double);

	double getWidth() const
	{
		return width;
	}

	double getLength() const
	{
		return length;
	}

	double getArea() const
	{
		return width * length;
	}
};