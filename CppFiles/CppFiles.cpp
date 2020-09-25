// CppFiles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

// Function prototypes
void writeToFile();
void writeUserInputToFile();
void readDataFromFile();
void fstreamFile();

int main()
{

	fstreamFile();

}

void writeToFile()
{
	std::ofstream outputFile;
	outputFile.open("demofile.txt", std::ios::out | std::ios::app);

	std::cout << "Now writing data to the file. \n";

	outputFile << "Beach\n";
	outputFile << "Bee\n";
	outputFile << "Mozart\n";
	outputFile << "Schubert\n";

	outputFile.close();

	std::cout << "Done\n";
}

void writeUserInputToFile()
{
	std::ofstream outputFile;

	int number1, number2, number3;

	outputFile.open("Numbers.txt");

	std::cout << "Enter a number: ";
	std::cin >> number1;

	std::cout << "Enter another number: ";
	std::cin >> number2;

	std::cout << "Enter another number: ";
	std::cin >> number3;

	outputFile << number1 << std::endl;
	outputFile << number2 << std::endl;
	outputFile << number3 << std::endl;

	std::cout << "The numbers were saved to a file.\n";

	outputFile.close();
	std::cout << "Done.\n";

}

void readDataFromFile()
{
	std::ifstream inputFileStream;
	int number;

	inputFileStream.open("Numbers.txt");

	if (!inputFileStream.fail())
	{
		while (inputFileStream >> number)
		{
			std::cout << number << std::endl;
		}

		inputFileStream.close();
	}
	else
	{
		std::cout << "Error opening the file.\n";
	}



}

void fstreamFile()
{
	std::fstream dataFile;

	std::cout << "Opening file....\n";

	dataFile.open("demofile.txt", std::ios::out);

	std::cout << "Now writing data to the file.\n";

	dataFile << "Jones\n";
	dataFile << "Smith\n";

	dataFile.close();

	std::cout << "Opening file again....\n";

	dataFile.open("demofile.txt", std::ios::out | std::ios::app);

	std::cout << "Writing more data to the file\n";

	dataFile << "Willis\n";
	dataFile << "Davis\n";

	std::cout << "Now closing the file.\n";

	dataFile.close();
}