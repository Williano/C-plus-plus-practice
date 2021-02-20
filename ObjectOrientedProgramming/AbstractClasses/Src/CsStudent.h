#pragma once

#include "Student.h"


const int MATH_HOURS = 20;
const int CS_HOURS = 40;
const int GEN_ED_HOURS = 60;


class CsStudent : public Student
{
private:

	int m_mathHours;
	int m_csHours;
	int m_genEdHours;

public:

	CsStudent() : Student()
	{
		m_mathHours = 0;
		m_csHours = 0;
		m_genEdHours = 0;
	}

	CsStudent(std::string name, std::string idNumber, int yearAdmitted) : Student(name, idNumber, yearAdmitted)
	{
		m_mathHours = 0;
		m_csHours = 0;
		m_genEdHours = 0;
	}

	void setMathHours(int mathHours)
	{
		m_mathHours = mathHours;
	}

	void setCsHours(int csHours)
	{
		m_csHours = csHours;
	}

	void setGenEdHours(int genEdHours)
	{
		m_genEdHours = genEdHours;
	}

	virtual int getRemainingHours() const;
};
