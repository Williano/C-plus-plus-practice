/*
    Program: Tax and Tip
    Description: This program ask user for cost of a meal ordered at a
                 restaurant.
                 The program then compute the tax and tip for the meal.
                 The program then displays the tip amount, tax amount,
                 and the grand total fo the meal including both the
                 tax and the tip.

    Programmer: William Kpabitey Kwabla.
    Date: 04/03/2020
*/

#include <iostream>
#include <string>

// Constants
double TAX_CONSTANT = 0.17;
double TIP_CONSTANT = 0.18;

// Function prototypes
double askUserForCostOfMealInDollars();
double calculateTax(double costOfMeal);
double calculateTip(double costOfMeal);
double calculateGrandTotalOfMeal(double tax, double tip);
void displayTaxTotal(double tax);
void dislplayTipTotal(double tip);
void displayGrandTotalOfMeal(double grandTotalOfMeal);

int main()
{
    double costOfMeal, tax, tip, grandTotalCostOfMeal;

    costOfMeal = askUserForCostOfMealInDollars();

    tax = calculateTax(costOfMeal);

    tip = calculateTip(costOfMeal);

    grandTotalCostOfMeal = calculateGrandTotalOfMeal(tax, tip);

    displayTaxTotal(tax);

    dislplayTipTotal(tip);

    displayGrandTotalOfMeal(grandTotalCostOfMeal);

    std::cin.get();
    return 0;
}


double askUserForCostOfMealInDollars()
{

    double costOfMeal;

    std::cout << "Enter cost of meal $: ";
    std::cin >> costOfMeal;

    std::cout << std::endl;

    return costOfMeal;
}


double calculateTax(double costOfMeal)
{

    double tax = costOfMeal * TAX_CONSTANT;

    return tax;
}


double calculateTip(double costOfMeal)
{
    double tip = costOfMeal * TIP_CONSTANT;

    return tip;
}


double calculateGrandTotalOfMeal(double tax, double tip)
{

    double grand_total_of_meal = tax + tip;

    return grand_total_of_meal;
}


void displayTaxTotal(double tax)
{

    std::cout << "The total tax is $: " << tax << std::endl;
}


void dislplayTipTotal(double tip)
{

    std::cout << "The total tip is $: " << tip << std::endl;
}


void displayGrandTotalOfMeal(double grandTotalOfMeal)
{
    std::cout << "The grand total for meal including tax and tip is $:" << grandTotalOfMeal << std::endl;
}


