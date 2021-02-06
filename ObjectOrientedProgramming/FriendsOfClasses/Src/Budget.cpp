#include "Budget.h"

double Budget::m_corpBudget = 0;

void Budget::mainOffice(double mOfficeRequest)
{
	m_corpBudget += mOfficeRequest;
}