#include <iostream>
#include <iomanip>
#include "Budget.h"


int main()
{
	int count;
	double mainOfficeRequest;
	const int NUM_DIVISIONS = 4;

	std::cout << "Enter the main office's budget request: " << std::endl;
	std::cin >> mainOfficeRequest;
	Budget::mainOffice(mainOfficeRequest);

	Budget divisions[NUM_DIVISIONS];
	AuxiliaryOffice auxOffices[4];


	for (count = 0; count < NUM_DIVISIONS; count++)
	{
		double budgetAmount;

		std::cout << "Enter the budget request for division:  ";
		std::cout << (count + 1) << ": ";
		std::cin >> budgetAmount;
		divisions[count].addBudget(budgetAmount);

		std::cout << "Enter the budget request for that division's " << std::endl;
		std::cout << "auxiliary office: ";
		std::cin >> budgetAmount;
		auxOffices[count].addBudget(budgetAmount, divisions[count]);
	}


	std::cout << std::showpoint << std::setprecision(2);
	std::cout << "\nHere are the division budget requests:\n";


	for (count = 0; count < NUM_DIVISIONS; count++)
	{
		std::cout << "\tDivision " << (count + 1) << "\t\t$";
		std::cout << divisions[count].getDivisionBudget() << std::endl;
		std::cout << "\tAuxiliary office:\t$";
		std::cout << auxOffices[count].getDivisionBudget() << std::endl << std::endl;
	}

	std::cout << "Total Budget Requests:\t$";
	std::cout << divisions[0].getCorpBudget() << std::endl;

	std::cin.get();
	return 0;
}