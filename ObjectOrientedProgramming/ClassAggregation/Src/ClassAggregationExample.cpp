#include "Course.h"

int main()
{
	Course myCourse("Intro to Computer Science", "Kramer", "Shawn", "RH3010", "Starting out with C++", "Gaddis", "Addision-Wesley");

	myCourse.print();

	std::cin.get();

	return 0;
}
