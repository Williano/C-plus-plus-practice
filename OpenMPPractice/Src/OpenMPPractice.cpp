#include <iostream>
#include <omp.h>


int main()
{

	std::cout << omp_get_max_threads() << std::endl;

#pragma omp parallel
	{
		int ID = omp_get_thread_num();
		std::cout << ID << std::endl;

	}


	std::cin.get();

	return 0;
}