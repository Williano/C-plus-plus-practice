#include <iostream>
#include <string>


void displayHelloMessageWithUsername(std::string userName);


int main()
{
    std::string userName;

    std::cout<< "Enter your name: " ;
    std::getline(std::cin, userName);

    displayHelloMessageWithUsername(userName);

    std::cin.get();
    return 0;
}


void displayHelloMessageWithUsername(std::string userName)
{
    std::cout << "Hello" << ", " << userName << "!" << std::endl;
}