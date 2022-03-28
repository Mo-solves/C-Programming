#include <iostream>

int main()
{
    int number1{45};
    int number2{60};

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << std::endl;

    std::cout << "Comparing Variables" << std::endl;
    std::cout << std::boolalpha; // Make bool show up as true/false instead of 0/1

    std::cout << "number1 < number2 : " << (number1 < number2) << std::endl;
    std::cout << "number1 <= number2 : " << (number1 <= number2) << std::endl;
    std::cout << "number1 > number2 : " << (number1 > number2) << std::endl;
    std::cout << "number1 >= number2 : " << (number1 >= number2) << std::endl;
    std::cout << "number1 == number2 : " << (number1 == number2) << std::endl;
    std::cout << "number1 != number2 : " << (number1 != number2) << std::endl;

    std::cout << std::endl;
    std::cout << "Store comparison result and use it later" << std::endl;

    bool result = (number1 == number2);

    std::cout << "The result is : " << result << std::endl;
    return 0;
}