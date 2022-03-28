#include <iostream>

int main()
{
    int value{45};

    std::cout << "The value is : " << value << std::endl;
    std::cout << std::endl;

    // Addition
    value += 5;
    std::cout << "The value is (after +=5) : " << value << std::endl;

    // Subtraction
    value -= 5;
    std::cout << "The value is (after -=5) : " << value << std::endl;

    // Multiplication
    value *= 2;
    std::cout << "The value is (after *=2) : " << value << std::endl;

    // Divition
    value /= 3;
    std::cout << "The value is (after /=3) : " << value << std::endl;

    // Modular
    value %= 11;
    std::cout << "The value is (after %=11) : " << value << std::endl;

    return 0;
}