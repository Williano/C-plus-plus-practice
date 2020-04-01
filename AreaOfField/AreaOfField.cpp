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

    double area = calculateAreaOfFieldInFeets(lengthAndWidth.length, lengthAndWidth.width);

    displayAreaOfFieldInArces(area);

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

void displayAreaOfFieldInArces(double areaInArces)
{
    std::cout << " " << std::endl;

    std::cout << "The area of the field is " << areaInArces << " arces" << std::endl;

}

