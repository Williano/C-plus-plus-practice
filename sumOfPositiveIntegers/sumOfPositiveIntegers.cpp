/**
    Program: Sum of the First n Positive Integers
    Description: A C++ program that  reads a positive integer, n, from the user
                 and then displays the sum of all of the integers from 1 to n.
    Programmer: William Kpabitey Kwabla
    Date: 06/01/20
*/

#include <iostream>
#include <string>

// Function prototypes
int getPositiveIntegerFromUser();
int computeSumOfPositiveIntegers(int positiveInteger);
void displaySumOfPositiveIntegers();


void main() {

}


int getPositiveIntegerFromUser()
{
    int userPositiveInteger;

    std::cout << "Please enter the positive integer you want to compute the sum for: " ;

    std::cin >> userPositiveInteger;

    return userPositiveInteger;
}


int computeSumOfPositiveIntegers(int positiveInteger)
{
    int sumOfPositiveIntegers;

    sumOfPositiveIntegers = (positiveInteger * (positiveInteger + 1)) / 2;

    return sumOfPositiveIntegers;
}


void displaySumOfPositiveIntegers()
{

}