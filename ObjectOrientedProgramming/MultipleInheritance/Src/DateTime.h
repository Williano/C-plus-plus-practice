#pragma once

#include <string>
#include "Date.h"
#include "Time.h"


class DateTime : public Date, public Time
{

public:
	DateTime();

	DateTime(int day, int month, int year, int hour, int min, int sec);

	void showDateTime() const;
};
