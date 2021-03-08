#pragma once


class Date
{

protected:
	int m_day;
	int m_month;
	int m_year;

public:

	Date() : m_day(1), m_month(1), m_year(1990) {}

	Date(int day, int month, int year)
	{
		m_day = day;
		m_month = month;
		m_year = year;
	}

	int getDay() const
	{
		return m_day;
	}

	int getMonth() const
	{
		return m_month;
	}

	int getYear() const
	{
		return m_year;
	}
};
