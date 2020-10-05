// PiMonteCarlo.cpp : A serial and parallel version of pi computation with OpenMP
//

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
#include <math.h>
#include <ctime>
#include <time.h>
#include <iostream>


// Function prototypes
void serialPiMonteCarlo(double& numOfPoints);
void parallelPiMonteCarlo(double& numofPoints, int& numOfThreads);


int main()
{

	double numOfPoints, startTime, endTime;
	int numOfThreads;


	std::cout << "Enter number of threads: " << std::endl;
	std::cin >> numOfThreads;

	std::cout << "********************************************" << std::endl;


	std::cout << "Enter number of points to be generated: " << std::endl;
	std::cin >> numOfPoints;

	std::cout << "*******************************************" << std::endl;

	std::cout << " " << std::endl;

	// Serial Version
	std::cout << "*******************************************" << std::endl;
	std::cout << "Serial Version " << std::endl;
	startTime = omp_get_wtime();
	serialPiMonteCarlo(numOfPoints);
	endTime = omp_get_wtime();

	std::cout << "Serial Monte Carlo Computation Time for " << static_cast<int>(numOfPoints) << " points is: " << endTime - startTime << " seconds" << std::endl;

	std::cout << " " << std::endl;

	// Parallel Verison
	std::cout << "*******************************************" << std::endl;
	std::cout << "Parallel Version " << std::endl;
	startTime = omp_get_wtime();
	parallelPiMonteCarlo(numOfPoints, numOfThreads);
	endTime = omp_get_wtime();

	std::cout << "Parallel Monte Carlo Computation Time for " << static_cast<int>(numOfPoints) << " points is: " << endTime - startTime << " seconds" << std::endl;


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
		srand((int)time(NULL) ^ omp_get_thread_num());


		for (i = 0; i < numberOfPoints; ++i)
		{
			x = (double)rand() / RAND_MAX;
			y = (double)rand() / RAND_MAX;
			z = sqrt((x * x) + (y * y));
			if (z <= 1)
			{
				++counter;
			}
		}

	}

	pi = ((double)counter / (double)(numberOfPoints * numberOfThreads)) * 4.0;

	std::cout << " " << std::endl;

	std::cout << "Pi: " << pi << std::endl;
}