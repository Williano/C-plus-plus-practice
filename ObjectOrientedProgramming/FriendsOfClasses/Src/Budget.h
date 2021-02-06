#pragma once

#include "Auxil.h"

class Budget
{
private:
	static double m_corpBudget;
	double m_divisionBudget;

public:
	Budget()
	{
		m_divisionBudget = 0;
	}

	void addBudget(double budget)
	{
		m_divisionBudget += budget;
		m_corpBudget += budget;
	}

	double getDivisionBudget() const
	{
		return m_divisionBudget;
	}

	double getCorpBudget() const
	{
		return m_corpBudget;
	}

	static void mainOffice(double mainOfficeRequest);

	friend void AuxiliaryOffice::addBudget(double budget, Budget& corpBudget);
};