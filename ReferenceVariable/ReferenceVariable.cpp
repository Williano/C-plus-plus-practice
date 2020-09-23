// ReferenceVariable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>

// Function prototype
void doubleNum(int& refVar);
void cppVoidPointer();

int main()
{
	int value = 4;

	std::cout << "In main, value is " << value << std::endl;
	std::cout << "Now calling doubleNum..." << std::endl;

	doubleNum(value);

	std::cout << "Now back in main. Value is " << value << std::endl;


	std::cout << "Address of a main() function is : " << main << std::endl;

	unsigned int num_of_cores = std::thread::hardware_concurrency();
	std::cout << "Your device has " << num_of_cores << " number of cores" << std::endl;

	std::cin.get();

	return 0;
}

void doubleNum(int& refVar)
{
	refVar *= 2;
}

void cppVoidPointer()
{
	void* ptr;   // void pointer declaration  
	int a = 9;   // integer variable initialization  
	ptr = &a;   // storing the address of 'a' variable in a void pointer variable.  
	std::cout << &a << std::endl;
	std::cout << ptr << std::endl;
	std::cout << "The value of the void pointer is: " << (int*)ptr << std::endl;
}