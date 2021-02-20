#include "CsStudent.h"

int CsStudent::getRemainingHours() const
{
	int requiredHours, remainingHours;

	requiredHours = MATH_HOURS + CS_HOURS + GEN_ED_HOURS;

	remainingHours = requiredHours - (m_mathHours + m_csHours + m_genEdHours);

	return remainingHours;
}
