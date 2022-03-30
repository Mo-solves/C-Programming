#include <iostream>

int main()
{
    // Implicit cast will add up the doubles
    // then turn result into int for assignment
    double x{12.5};
    double y{34.6};

    int sum = x + y;
    std::cout << "The sum is : " << sum << std::endl;

    // Explicit cast : cast then sum
    sum = static_cast<int>(x) + static_cast<int>(y);
    std::cout << "The sum is : " << sum << std::endl;

    // Explicit cast : sum up then cast, samething as implicit cast
    sum = static_cast<int>(x + y);
    std::cout << "sum up then cast, result is : " << sum << std::endl;

    double PI{3.14};
    // Old style C-cast
    int int_pi = (int)(PI);
    std::cout << "PI : " << PI << std::endl;
    std::cout << "int_pi : " << int_pi << std::endl;
    return 0;
}