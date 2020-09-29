// MatrixMultiplication.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <ctime>


// Fucntion Prototypes
int* generateMatrix(const int size);
void randomizeMatrix(int* matrix, int size);

double Testijk(int size);
double Testjik(int size);
double Testkij(int size);
double Testikj(int size);
double Testjki(int size);
double Testkji(int size);

void ijk(int* A, int* B, int* C, int size);
void jik(int* A, int* B, int* C, int size);
void kij(int* A, int* B, int* C, int size);
void ikj(int* A, int* B, int* C, int size);
void jki(int* A, int* B, int* C, int size);
void kji(int* A, int* B, int* C, int size);

void ijkAverageTime();
void jikAverageTime();
void kijAverageTime();
void ikjAverageTime();
void jkiAverageTime();
void kjiAverageTime();

int main() {




	ijkAverageTime();
	std::cout << "------------------------" << std::endl;
	jikAverageTime();
	std::cout << "------------------------" << std::endl;
	kijAverageTime();
	std::cout << "------------------------" << std::endl;
	ikjAverageTime();
	std::cout << "------------------------" << std::endl;
	jkiAverageTime();
	std::cout << "------------------------" << std::endl;
	kjiAverageTime();

	std::cin.get();

	return 0;
}

int* generateMatrix(int size) {
	return new int[size, size];
}

void randomizeMatrix(int* matrix, int size) {
	int value = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (value > 255)
				value = 1;
			matrix[i, j] = value++;
		}
	}
}
/* ijk */
void ijk(int* a, int* b, int* c, int size) {
	int i, j, k, sum;

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			sum = 0.0f;
			for (k = 0; k < size; k++) {
				sum += a[i, k] * b[k, j];
			}
			c[i, j] = sum;
		}


	}

}

/* jik */
void jik(int* a, int* b, int* c, int size) {
	int i, j, k, sum;

	for (j = 0; j < size; j++) {
		for (i = 0; i < size; i++) {
			sum = 0.0f;
			for (k = 0; k < size; k++) {
				sum += a[i, k] * b[k, j];
			}
			c[i, j] = sum;
		}
	}
}

/* kij */
void kij(int* a, int* b, int* c, int size) {
	int i, j, k, r;

	for (k = 0; k < size; k++) {
		for (i = 0; i < size; i++) {
			r = a[i, k];
			for (j = 0; j < size; j++) {
				c[i, j] += r * b[k, j];
			}
		}
	}
}

/* ikj */
void ikj(int* a, int* b, int* c, int size) {
	int i, j, k, r;

	for (i = 0; i < size; i++) {
		for (k = 0; k < size; k++) {
			r = a[i, k];
			for (j = 0; j < size; j++) {
				c[i, j] += r * b[k, j];
			}
		}
	}
}

/* jki */
void jki(int* a, int* b, int* c, int size) {
	int i, j, k, r;

	for (j = 0; j < size; j++) {
		for (k = 0; k < size; k++) {
			r = b[k, j];
			for (i = 0; i < size; i++) {
				c[i, j] += a[i, k] * r;
			}
		}
	}
}

/* kji */
void kji(int* a, int* b, int* c, int size) {
	int i, j, k, r;

	for (k = 0; k < size; k++) {
		for (j = 0; j < size; j++) {
			r = b[k, j];
			for (i = 0; i < size; i++) {
				c[i, j] += a[i, k] * r;
			}
		}
	}
}


// Function Definitions
double Testijk(int size)
{


	int* A = generateMatrix(size);
	int* B = generateMatrix(size);
	int* C = generateMatrix(size);


	randomizeMatrix(A, size);
	randomizeMatrix(B, size);
	randomizeMatrix(C, size);


	clock_t startTime = clock();

	ijk(A, B, C, size);

	clock_t endTime = clock();

	clock_t clockTicksTaken = endTime - startTime;

	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;


	return timeInSeconds;
}

double Testjik(int size)
{

	int* A = generateMatrix(size);
	int* B = generateMatrix(size);
	int* C = generateMatrix(size);


	randomizeMatrix(A, size);
	randomizeMatrix(B, size);
	randomizeMatrix(C, size);


	clock_t startTime = clock();

	jik(A, B, C, size);

	clock_t endTime = clock();

	clock_t clockTicksTaken = endTime - startTime;

	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;


	return timeInSeconds;
}


double Testkij(int size)
{

	int* A = generateMatrix(size);
	int* B = generateMatrix(size);
	int* C = generateMatrix(size);


	randomizeMatrix(A, size);
	randomizeMatrix(B, size);
	randomizeMatrix(C, size);


	clock_t startTime = clock();

	kij(A, B, C, size);

	clock_t endTime = clock();

	clock_t clockTicksTaken = endTime - startTime;

	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;


	return timeInSeconds;
}

double Testikj(int size)
{

	int* A = generateMatrix(size);
	int* B = generateMatrix(size);
	int* C = generateMatrix(size);


	randomizeMatrix(A, size);
	randomizeMatrix(B, size);
	randomizeMatrix(C, size);


	clock_t startTime = clock();

	ikj(A, B, C, size);

	clock_t endTime = clock();

	clock_t clockTicksTaken = endTime - startTime;

	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;


	return timeInSeconds;
}

double Testjki(int size)
{

	int* A = generateMatrix(size);
	int* B = generateMatrix(size);
	int* C = generateMatrix(size);


	randomizeMatrix(A, size);
	randomizeMatrix(B, size);
	randomizeMatrix(C, size);


	clock_t startTime = clock();

	jki(A, B, C, size);

	clock_t endTime = clock();

	clock_t clockTicksTaken = endTime - startTime;

	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;


	return timeInSeconds;
}


double Testkji(int size)
{

	int* A = generateMatrix(size);
	int* B = generateMatrix(size);
	int* C = generateMatrix(size);


	randomizeMatrix(A, size);
	randomizeMatrix(B, size);
	randomizeMatrix(C, size);


	clock_t startTime = clock();

	kji(A, B, C, size);

	clock_t endTime = clock();

	clock_t clockTicksTaken = endTime - startTime;

	double timeInSeconds = clockTicksTaken / (double)CLOCKS_PER_SEC;


	return timeInSeconds;
}


void ijkAverageTime()
{
	// ijk
	std::cout << "This is ijk " << std::endl;
	double timeElapsed;
	int testNum = 5;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testijk(10);
	}

	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testijk(100);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{

		timeElapsed += Testijk(1000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testijk(10000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;
}


void jikAverageTime()
{
	// jik
	std::cout << "This is jik " << std::endl;
	double timeElapsed;
	int testNum = 5;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testjik(10);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testjik(100);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{

		timeElapsed += Testjik(1000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; 2 < testNum; i++)
	{
		timeElapsed += Testjik(10000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

}


void kijAverageTime()
{
	// kij
	std::cout << "This is kij " << std::endl;
	double timeElapsed;
	int testNum = 5;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testkij(10);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testkij(100);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{

		timeElapsed += Testkij(1000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testkij(10000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;
}

void ikjAverageTime()
{
	// ikj
	std::cout << "This is ikj " << std::endl;
	double timeElapsed;
	int testNum = 5;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testikj(10);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testikj(100);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{

		timeElapsed += Testikj(1000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testikj(10000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;
}

void jkiAverageTime()
{

	// jki
	std::cout << "This is jki " << std::endl;
	double timeElapsed;
	int testNum = 5;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testjki(10);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testjki(100);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{

		timeElapsed += Testjki(1000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testjki(10000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

}


void kjiAverageTime()
{
	// kji
	std::cout << "This is kji " << std::endl;
	double timeElapsed;
	int testNum = 5;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testkji(10);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testkji(100);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{

		timeElapsed += Testkji(1000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;

	timeElapsed = 0;
	for (int i = 0; i < testNum; i++)
	{
		timeElapsed += Testkji(10000);
	}
	timeElapsed /= testNum;
	std::cout << timeElapsed << std::endl;
}