#pragma once

#include <iostream>
#include <string>


class Instructor
{
private:
	std::string lastName;
	std::string firstName;
	std::string officeNumber;

public:
	Instructor() : lastName(""), firstName(""), officeNumber("")
	{

	}

	Instructor(std::string lName, std::string fName, std::string office) : lastName(lName), firstName(fName), officeNumber(office) {}

	void print() const
	{
		std::cout << "Last name: " << lastName << std::endl;
		std::cout << "First name: " << firstName << std::endl;
		std::cout << "Office number " << officeNumber << std::endl;
	}
};