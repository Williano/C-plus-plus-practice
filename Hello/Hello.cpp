/*
    Program: Hello
    Description: A C++ program that asks the user to enter his or her name.
                 The program then respond with a message that says hello to
                 the user, using his or her name.
    Programmer: William Kpabitey Kwabla
    Date: 03/30/20
*/

#include <iostream>
#include <string>

// Function prototypes to enable main function to call functions before declaration.
std::string getUserName();
void displayHelloMessageWithUsername(std::string userName);

int main()
{
    std::string userName;

    userName = getUserName();

    displayHelloMessageWithUsername(userName);

    std::cin.get();
    return 0;
}


std::string getUserName()
{
    std::string userName;

    std::cout<< "Enter your name: " ;
    std::getline(std::cin, userName);

    return userName;
}


void displayHelloMessageWithUsername(std::string userName)
{
    std::cout << "Hello" << ", " << userName << "!" << std::endl;
}