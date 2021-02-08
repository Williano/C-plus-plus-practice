#pragma once

#include <iostream>
#include <string>

#include "Instructor.h"
#include "TextBook.h"

class Course
{
private:
	std::string m_courseName;
	Instructor m_instructor;
	TextBook m_textbook;

public:
	Course(std::string course, std::string instrLastName, std::string instrFirstName, std::string instrOffice, std::string textTitle, std::string author, std::string publisher) : m_courseName(course), m_instructor(instrLastName, instrFirstName, instrOffice), m_textbook(textTitle, author, publisher) {}

	void print() const
	{
		std::cout << "Course name: " << m_courseName << std::endl << std::endl;

		std::cout << "Instructor Information:\n";
		m_instructor.print();

		std::cout << "\nTextbook Information:\n";
		m_textbook.print();

		std::cout << std::endl;
	}
};
