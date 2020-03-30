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