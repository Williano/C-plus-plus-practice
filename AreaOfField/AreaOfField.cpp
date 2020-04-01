/**
    Program: Area of  Field
    Description: A C++ program that reads the length and width of a farmer’s
                 field from the user in feet and Display the area of the field
                 in acres.
    Programmer: William Kpabitey Kwabla
    Date: 04/01/20
*/

#include <iostream>
#include <string>


// One Arce constant
int ONEARCECONSTANT = 45360;


// Structure to store multiple return type
struct LenghtAndWidthReturn
{
    double length, width;
};


// Function prototypes
LenghtAndWidthReturn getLenghtAndWidthOfFieldFromUser();
double calculateAreaOfFieldInFeets(double length, double width);
double covertAreaOfFieldFromFeetsToArces(double areaInFeet);
void displayAreaOfFieldInArces(double areaInArces);


int main()
{

    LenghtAndWidthReturn lengthAndWidth = getLenghtAndWidthOfFieldFromUser();

    double areaInFeets = calculateAreaOfFieldInFeets(lengthAndWidth.length, lengthAndWidth.width);

    double areaInArces = covertAreaOfFieldFromFeetsToArces(areaInFeets);

    displayAreaOfFieldInArces(areaInArces);

    std::cin.get();
    return 0;
}

LenghtAndWidthReturn getLenghtAndWidthOfFieldFromUser()
{
    LenghtAndWidthReturn lengthAndWidth;

    double length, width;

    std::cout << "Enter the length of the field in feet: ";
    std::cin >> length;

    std::cout << "Enter the width of the field in feet: ";
    std::cin >> width;

    lengthAndWidth.length = length;
    lengthAndWidth.width = width;

    //return {length, width}

    return lengthAndWidth;
}

double calculateAreaOfFieldInFeets(double length, double width)
{
    double areaInFeet = length * width;

    return areaInFeet;
}


double covertAreaOfFieldFromFeetsToArces(double areaInFeet)
{
    double areaInArces = areaInFeet / ONEARCECONSTANT;

    return areaInArces;
}

void displayAreaOfFieldInArces(double areaInArces)
{
    std::cout << " " << std::endl;

    std::cout << "The area of the field is " << areaInArces << " arces" << std::endl;

}

