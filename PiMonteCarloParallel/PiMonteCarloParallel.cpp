#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
#include <ctime>
#include <time.h>
#include <iostream>



void serialPiMonteCarlo(double& numOfPoints);
void parallelPiMonteCarlo(double& numofPoints, int& numOfThreads);

int main()
{

	double numberOfPoints, x, y, z, pi;
	int i, numberOfThreads;
	int counter = 0;

	std::cout << "Enter number of threads: " << std::endl;
	std::cin >> numberOfThreads;

	std::cout << "*****************" << std::endl;


	std::cout << "Enter number of points to be generated: " << std::endl;
	std::cin >> numberOfPoints;

	std::cout << "*****************" << std::endl;

#pragma omp parallel firstprivate(x, y, z, i) shared(counter) num_threads(numberOfThreads)
	{
		srand((int)time(NULL) ^ omp_get_thread_num());    //Give random() a seed value
		for (i = 0; i < numberOfPoints; ++i)              //main loop
		{
			x = (double)rand() / RAND_MAX;      //gets a random x coordinate
			y = (double)rand() / RAND_MAX;      //gets a random y coordinate
			z = sqrt((x * x) + (y * y));          //Checks to see if number is inside unit circle
			if (z <= 1)
			{
				++counter;            //if it is, consider it a valid random point
			}
		}
		//print the value of each thread/rank
	}

	pi = ((double)counter / (double)(numberOfPoints * numberOfThreads)) * 4.0;

	std::cout << " " << std::endl;

	std::cout << "Pi: " << pi << std::endl;

	return 0;
}

void serialPiMonteCarlo(double& numberOfPoints)
{
	double x, y, z, pi;
	int i;
	int counter = 0;

	//main loop
	for (i = 0; i < numberOfPoints; ++i)
	{
		//get random points
		x = (double)rand() / RAND_MAX;
		y = (double)rand() / RAND_MAX;
		z = sqrt((x * x) + (y * y));

		//check to see if point is in unit circle
		if (z <= 1)
		{
			++counter;
		}
	}

	pi = ((double)counter / (double)numberOfPoints) * 4.0;

	std::cout << " " << std::endl;

	std::cout << "Pi: " << pi << std::endl;
}


void parallelPiMonteCarlo(double& numberOfPoints, int& numberOfThreads)
{
	double x, y, z, pi;
	int i;
	int counter = 0;

#pragma omp parallel firstprivate(x, y, z, i) shared(counter) num_threads(numberOfThreads)
	{
		srand((int)time(NULL) ^ omp_get_thread_num());    //Give random() a seed value
		for (i = 0; i < numberOfPoints; ++i)              //main loop
		{
			x = (double)rand() / RAND_MAX;      //gets a random x coordinate
			y = (double)rand() / RAND_MAX;      //gets a random y coordinate
			z = sqrt((x * x) + (y * y));          //Checks to see if number is inside unit circle
			if (z <= 1)
			{
				++counter;            //if it is, consider it a valid random point
			}
		}
		//print the value of each thread/rank
	}

	pi = ((double)counter / (double)(numberOfPoints * numberOfThreads)) * 4.0;

	std::cout << " " << std::endl;

	std::cout << "Pi: " << pi << std::endl;
}