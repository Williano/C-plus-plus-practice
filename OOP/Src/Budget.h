#pragma once

class Budget {

public:
	Budget() { m_divisionBudget = 0; }

	void addBudget(double b)
	{
		m_divisionBudget += b;
		corpBudget += b;
	}

	double getDivisionBudget() const
	{
		return m_divisionBudget;
	}

	double getCorpBudget() const
	{
		return corpBudget;
	}

	static void mainOffice(double);

private:
	static double corpBudget;
	double m_divisionBudget;
};