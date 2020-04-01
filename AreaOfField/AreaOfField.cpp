/**
    Program: Area of  Room
    Description: A python program that ask user for lenght and width of a room
                 and compute the area of the room with the user inputs.
    Programmer: William Kpabitey Kwabla
    Date: 03/31/20
*/

#include <iostream>
#include <string>

// Structure to store multiple return type
struct LenghtAndWidthReturn
{
    double length, width;
};


// Function prototypes
LenghtAndWidthReturn getLenghtAndWidthOfRoomFromUser();
double calculateAreaOfRoom(double length, double width);
void displayAreaOfRoom(double area);


int main()
{

    LenghtAndWidthReturn lengthAndWidth = getLenghtAndWidthOfRoomFromUser();

    double area = calculateAreaOfRoom(lengthAndWidth.length, lengthAndWidth.width);

    displayAreaOfRoom(area);

    std::cin.get();
    return 0;
}

LenghtAndWidthReturn getLenghtAndWidthOfRoomFromUser()
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

double calculateAreaOfRoom(double length, double width)
{
    double area = length * width;

    return area;
}

void displayAreaOfRoom(double area)
{
    std::cout << " " << std::endl;

    std::cout << "The area of the room is " << area << " meters" << std::endl;

}

