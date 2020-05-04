/*
    Program: Bottle Deposits

    Description: In many jurisdictions a small deposit is added to drink
                 containers to encourage people to recycle them. In one
                 particular jurisdiction, drink containers holding one liter or
                 less have a $0.10 deposit, and drink containers holding more
                 than one liter have a $0.25 deposit.

                 This program reads the number of containers of each size from
                 the user.
                 The program then continue by computing and displaying the
                 refund that will be received for returning those containers.
                 It formats the output so that it includes a dollar sign and
                 always displays exactly two decimal places.

    Programmer: William Kpabitey Kwabla
    Date: 05/4/20
*/

#include <iostream>
#include <string>

// Constants
double ONE_LITER = 0.10;
double MORE_THAN_ONE_LITER = 0.25;


// Struct to return multiple data
struct ContainerSize
{
    int oneLiter;
    int moreThanOneLiter;
};


// Function Prototypes
ContainerSize getNumberOfContainerOfEachSizeFromUser();
double computeRefundForEachContainerSize(int numberOfOneLiterContainers, int numberOfMoreThanOneLiterContainers);
void displayRefundForEachContainerSizeInDollars(double totalRefund);


int main()
{

    ContainerSize containerSize = getNumberOfContainerOfEachSizeFromUser();

    double totalRefund = computeRefundForEachContainerSize(containerSize.oneLiter, containerSize.moreThanOneLiter);

    displayRefundForEachContainerSizeInDollars(totalRefund);

    std::cin.get();
    return 0;
}


ContainerSize getNumberOfContainerOfEachSizeFromUser()
{
    int numberOfOneLiterContainers, numberOfMoreThanOneLiterContainers;

    std::cout << "Enter the number of one liter containers: ";
    std::cin >> numberOfOneLiterContainers;


    std::cout << "Enter the number of more than one liter containers: ";
    std::cin >> numberOfMoreThanOneLiterContainers;

    return {numberOfOneLiterContainers, numberOfMoreThanOneLiterContainers};
}


double computeRefundForEachContainerSize(int numberOfOneLiterContainers, int numberOfMoreThanOneLiterContainers)
{
    double totalRefundForOneLiterContainers = ONE_LITER * numberOfOneLiterContainers;
    double totalRefundForMoreThanLiterContainers = MORE_THAN_ONE_LITER * numberOfMoreThanOneLiterContainers;

    double totalRefund = totalRefundForOneLiterContainers + totalRefundForMoreThanLiterContainers;

    return totalRefund;
}


void displayRefundForEachContainerSizeInDollars(double totalRefund)
{

    std::cout << " " << std::endl;

    std::cout.precision(2);
    std::cout << "Your total refund is $" << totalRefund;
}