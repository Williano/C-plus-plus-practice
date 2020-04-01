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
double calculateAreaOfField(double length, double width);
void displayAreaOfField(double area);


int main()
{

    LenghtAndWidthReturn lengthAndWidth = getLenghtAndWidthOfFieldFromUser();

    double area = calculateAreaOfField(lengthAndWidth.length, lengthAndWidth.width);

    displayAreaOfField(area);

    std::cin.get();
    return 0;
}

LenghtAndWidthReturn getLenghtAndWidthOfFieldFromUser()
{
    LenghtAndWidthReturn lengthAndWidth;

    double length, width;

    std::cout << "Enter the length of the room in meters: ";
    std::cin >> length;

    std::cout << "Enter the width of the room in meters: ";
    std::cin >> width;

    lengthAndWidth.length = length;
    lengthAndWidth.width = width;

    //return {length, width}

    return lengthAndWidth;
}

double calculateAreaOfField(double length, double width)
{
    double area = length * width;

    return area;
}

void displayAreaOfField(double area)
{
    std::cout << " " << std::endl;

    std::cout << "The area of the room is " << area << " meters" << std::endl;

}

