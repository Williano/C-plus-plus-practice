#include "Budget.h"

double Budget::corpBudget = 0;

void Budget::mainOffice(double moffice)
{
	corpBudget += moffice;
}