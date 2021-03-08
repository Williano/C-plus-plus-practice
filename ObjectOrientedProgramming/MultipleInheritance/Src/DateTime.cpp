#include <iostream>
#include <string>
#include "DateTime.h"


DateTime::DateTime() : Date(), Time() {}

DateTime::DateTime(int day, int month, int year, int hour, int min, int sec) : Date(day, month, year), Time(hour, min, sec) {}

void DateTime::showDateTime() const
{
	std::cout << getMonth() << "/" << getDay() << "/" << getYear() << " ";

	std::cout << getHour() << ":" << getMin() << ":" << getSec() << std::endl;
}
