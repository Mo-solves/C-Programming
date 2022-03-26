#include <iostream>

int addNumbers(int first_number, int second_number)
{
    int sum = first_number + second_number;
    return sum;
}

int main()
{

    // Statement ends with ;
    int first_number = 3;  // statement
    int second_number = 7; // statement

    std::cout << "First Number : " << first_number << std::endl;
    std::cout << "Second Number : " << second_number << std::endl;

    int sum = addNumbers(first_number, second_number);

    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(12, 15);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(60, 105);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNumbers(100, 206) << std::endl;

    return 0;
}