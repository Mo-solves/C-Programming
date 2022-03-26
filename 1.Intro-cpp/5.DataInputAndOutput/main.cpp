#include <iostream>
#include <string>

int main()
{
    /*
    // Printing data
    std::cout << "Hello c++20" << std::endl;

    int age = 27;
    std::cout << "Age: " << age << std::endl;

    // Printing error
    std::cerr << "Error message : Something is wrong" << std::endl;

    // Print log message
    std::clog << "Log message : Something happened" << std::endl;
    */

    /*
     int age1;
     std::string name;

     std::cout << "Please type your name and age : " << std::endl;

     // Get data from the user
     // std::cin >> name;
     // std::cin >> age1;

     std::cin >> name >> age1;

     std::cout << "Hello " << name << " You are " << age1 << " Years old" << std::endl;
    */

    std::string fullName;
    int age3;
    std::cout << "Enter your fullName: " << std::endl;
    // Data with spaces
    std::getline(std::cin, fullName);

    std::cout << "Enter your age: " << std::endl;
    std::cin >> age3;

    std::cout << "My fullName is " << fullName << " and I am " << age3 << " years old!" << std::endl;
    return 0;
}