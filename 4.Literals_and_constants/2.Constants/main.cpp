#include <iostream>

int main()
{
    const int age{34};
    const float height{12.5f};

    // age = 50; // Can't modify

    int years{3 * age};
    std::cout << "age : " << age << std::endl;
    std::cout << "height : " << height << std::endl;
    std::cout << "years : " << years << std::endl;

    return 0;
}