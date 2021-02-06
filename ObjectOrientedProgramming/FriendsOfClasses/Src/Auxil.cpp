#include "Auxil.h"
#include "Budget.h"


void AuxiliaryOffice::addBudget(double b, Budget& division)
{
	m_auxBudget += b;
	division.m_corpBudget += b;
}