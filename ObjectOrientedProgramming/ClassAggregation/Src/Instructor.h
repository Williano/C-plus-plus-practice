#pragma once

#include <iostream>
#include <string>


class Instructor
{
private:
	std::string m_lastName;
	std::string m_firstName;
	std::string m_officeNumber;

public:
	Instructor() : m_lastName(""), m_firstName(""), m_officeNumber("")
	{

	}

	Instructor(std::string lName, std::string fName, std::string office) : m_lastName(lName), m_firstName(fName), m_officeNumber(office) {}

	void print() const
	{
		std::cout << "Last name: " << m_lastName << std::endl;
		std::cout << "First name: " << m_firstName << std::endl;
		std::cout << "Office number " << m_officeNumber << std::endl;
	}
};