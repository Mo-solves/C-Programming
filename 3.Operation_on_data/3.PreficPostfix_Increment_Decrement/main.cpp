#include <iostream>

int main()
{
    int value{5};

    // Increment by one
    value = value + 1;
    std::cout << "The value is : " << value << std::endl;

    value = 5; // Reset value to 5;

    // Decrement by one
    value = value - 1;
    std::cout << "The value is : " << value << std::endl;

    std::cout << "======Postfix increment and decrement==========" << std::endl;

    // Reset value to 5
    value = 5;

    std::cout << "The value is (incrementing) : " << value++ << std::endl;
    std::cout << "The value is : " << value << std::endl;

    std::cout << std::endl;

    // Decrement with postfix
    value = 5; // Reset value to 5

    std::cout << "The value is (decrementin) : " << value-- << std::endl;
    std::cout << "The value is : " << value << std::endl;

    std::cout << "======Prefix increment and decrement==========" << std::endl;

    // Prefix Incrementing
    value = 5;
    ++value;
    std::cout << "The value is (prefix++ in place) : " << value << std::endl;

    std::cout << std::endl;

    // Prefix Decrementing
    value = 5;
    --value;
    std::cout << "The value is (prefix--) : " << value << std::endl;

    value = 5;
    std::cout << "The value is (prefix-- in place) : " << --value << std::endl;

    return 0;
}