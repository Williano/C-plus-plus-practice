#include <iostream>
#include <iomanip>

#include "FinalExam.h"


int main()
{

	int questions;
	int missed;

	std::cout << "How many questions are on the final exam? ";
	std::cin >> questions;

	std::cout << "How many questions did the student miss? ";
	std::cin >> missed;

	FinalExam test(questions, missed);

	std::cout << std::setprecision(2);
	std::cout << "\nEach question counts " << test.getPointsEach() << " points.\n";
	std::cout << "The exam score is " << test.getScore() << std::endl;
	std::cout << "The exam grade is " << test.getLetterGrade() << std::endl;

	std::cin.get();

	return 0;

}
