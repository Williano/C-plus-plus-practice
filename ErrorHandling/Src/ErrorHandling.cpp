#include <iostream>
#include <string>


double divide(int num, int num2);


int main()
{
	int num1, num2;
	double quotient;

	std::cout << "Enter two numbers: ";
	std::cin >> num1 >> num2;

	try
	{
		quotient = divide(num1, num2);
		std::cout << "The quotient is " << quotient << std::endl;
	}
	catch (std::string exceptionString)
	{
		std::cout << exceptionString;
		std::cout << "End of the program.\n";
		return 0;
	}

}


double divide(int numerator, int denominator)
{
	if (denominator == 0)
	{
		std::string exceptionString = "ERROR:: Cannot divide by zero.\n";
		throw exceptionString;
	}

	return static_cast<double>(numerator) / denominator;
}
