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
std::string displayTaxTotal(double tax);
std::string dislplayTipTotal(double tip);
std::string displayGrandTotalOfMeal(double grandTotalOfMeal);
