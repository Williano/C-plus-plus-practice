#pragma once

#include <string>


class Student
{
protected:
	std::string m_name;
	std::string m_idNumber;
	int m_yearAdmitted;

public:

	Student() : m_name(""), m_idNumber(""), m_yearAdmitted(0) {}

	Student(std::string name, std::string idNumber, int yearAdmitted) : m_name(name), m_idNumber(idNumber), m_yearAdmitted(yearAdmitted) {}

	void set(std::string name, std::string idNumber, int yearAdmitted)
	{
		m_name = name;
		m_idNumber = idNumber;
		m_yearAdmitted = yearAdmitted;
	}

	const std::string getName() const
	{
		return m_name;
	}

	const std::string getIdNumber() const
	{
		return m_idNumber;
	}

	int getYearAdmitted() const
	{
		return m_yearAdmitted;
	}

	virtual int getRemainingHours() const = 0;

};
