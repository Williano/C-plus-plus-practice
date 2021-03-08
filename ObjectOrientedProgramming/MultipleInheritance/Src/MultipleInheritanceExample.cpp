#include <iostream>
#include "DateTime.h"


int main()
{


	DateTime emptyDay;

	emptyDay.showDateTime();

	DateTime pastDay(2, 4, 1960, 5, 32, 27);

	pastDay.showDateTime();


	std::cin.get();

	return 0;
}
