#include "GradedActivity.h"

char GradedActivity::getLetterGrade() const
{
	char letterGrade;

	if (m_score > 89)
	{
		letterGrade = 'A';
	}
	else if (m_score > 79)
	{
		letterGrade = 'B';
	}
	else if (m_score > 69)
	{
		letterGrade = 'C';
	}
	else if (m_score > 59)
	{
		letterGrade = 'D';
	}
	else
	{
		letterGrade = 'F';
	}


	return letterGrade;

}
