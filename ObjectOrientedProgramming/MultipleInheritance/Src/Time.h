#pragma once


class Time
{

protected:
	int m_hour;
	int m_min;
	int m_sec;


public:

	Time() : m_hour(0), m_min(0), m_sec(0) {}

	Time(int hour, int min, int sec) : m_hour(hour), m_min(min), m_sec(sec) {}

	int getHour() const
	{
		return m_hour;
	}

	int getMin() const
	{
		return m_min;
	}

	int getSec() const
	{
		return m_sec;
	}
};
