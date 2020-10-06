#include <iostream>
#include <omp.h>


int main()
{
	omp_set_num_threads(8);

#pragma omp parallel
	std::cout << "Hello OpenMP test" << std::endl;

	std::cin.get();

	return 0;
}