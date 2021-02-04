#include <iostream>

#include "ContactInfo.h"


int main()
{
	ContactInfo entry("Kristen Lee", "555-2021");

	std::cout << "Name: " << entry.getName() << std::endl;
	std::cout << "Phone Number: " << entry.getPhoneNumber() << std::endl;


	std::cin.get();

	return 0;
}