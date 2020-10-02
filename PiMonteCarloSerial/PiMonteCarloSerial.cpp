#include <ctime>
#include <time.h>
#include <iostream>

int main()
{

	double numberOfPoints, x, y, z, pi;
	int i;
	int counter = 0;


	srand(time(NULL));

	std::cout << "Enter number of points to be generated: " << std::endl;
	std::cin >> numberOfPoints;

	std::cout << "*****************" << std::endl;

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

	pi = ((double)counter / (double)numberOfPoints) * 4.0;          //p = 4(m/n)

	std::cout << " " << std::endl;

	std::cout << "Pi: " << pi << std::endl;

	return 0;
}