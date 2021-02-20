#include <iostream>
#include "CsStudent.h"


int main()
{
	CsStudent student("Jennifer Haynes", "167W98337", 2006);

	student.setMathHours(12);
	student.setCsHours(20);
	student.setGenEdHours(40);

	std::cout << "The student " << student.getName()
		<< " needs to take " << student.getRemainingHours()
		<< " more hours to graduate.\n";

	return 0;
}
