/**
    Program: Area of  Room
    Description: A python program that ask user for lenght and width of a room
                 and compute the area of the room with the user inputs.
    Programmer: William Kpabitey Kwabla
    Date: 03/31/20
*/

#include <iostream>
#include <string>

// Structure to store return type
struct LenghtAndWidthReturn
{
    double length, width;
};


// Function prototypes

LenghtAndWidthReturn getLenghtAndWidthOfRoomFromUser()
{
    double length, width;

    std::cout << "Enter the length of the room in meters: " << std::endl;
    std::cin >> length;

    std::cout << "Enter the width of the room in meters: " << std::endl;
    std::cin >> width;

    return {length, width};
}

double calculateAreaOfRoom(double length, double width)
{
    double area = length * width;

    return area;
}