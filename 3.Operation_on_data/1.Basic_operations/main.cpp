#include <iostream>

int main()
{
    int number1{2};
    int number2{7};

    // Addition
    int result = number1 + number2;
    std::cout << "Result : " << result << std::endl;

    // Subtraction
    result = number1 - number2;
    std::cout << "Result : " << result << std::endl;

    // Multiplication
    result = number1 * number2;
    std::cout << "Result : " << result << std::endl;

    // Divition
    result = number2 / number1;
    std::cout << "Result : " << result << std::endl;

    // Modulus
    result = number2 % number1;
    std::cout << "Result : " << result << std::endl;

    result = 31 % 10;
    std::cout << "Result : " << result << std::endl;

    return 0;
}