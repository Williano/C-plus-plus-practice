#pragma once

class Budget;

class AuxiliaryOffice
{
private:
	double m_auxBudget;

public:
	AuxiliaryOffice()
	{
		m_auxBudget = 0;
	}

	double getDivisionBudget() const
	{
		return m_auxBudget;
	}

	void addBudget(double budget, Budget& budgetClass);
};