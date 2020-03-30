#include <iostream>
#include <string>

// Function prototype to allow main to call functions before declaration
void displayMailingAddress();

int main()
{
    displayMailingAddress();

    std::cin.get();
    return 0;
}


void displayMailingAddress()
{
    std::string name = "William Kpabitey Kwabla";
    std::string street1Address = "530 South Donaghey Avenue Apt 610";
    std::string city = "Conway";
    std::string state = "AR";
    std::string zipCode = "72034-7127";
    std::string country = "United States";

    std::cout << name << std::endl;
    std::cout << street1Address << std::endl;
    std::cout << city << "," << zipCode << std::endl;
    std::cout << country << std::endl;
}