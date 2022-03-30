#include <iostream>

int main()
{
    // * The Compiler applies implicit conversion
    //      When types are different in an expression
    // * Conversions are always done from the smallest
    //      to the largest type in this case int is transformed
    //      to double before the expression is evaluated.
    //      Unless we are doing an assignment

    double price{45.6};
    int units{10};

    auto total_price = price * units; // units will be implicitly converted to double;

    std::cout << "Total price : " << total_price << std::endl;
    std::cout << "sizeof total_price : " << sizeof(total_price) << std::endl;

    // Implicit conversions in assignments
    // The assignment operation is going to cause an implicit
    // narrowing conversion, y is converted to int before assignment

    int x;
    double y{45.44};
    x = y;

    std::cout << "The value of x is : " << x << std::endl;
    std::cout << "sizeof x is : " << sizeof(x) << std::endl;
    std::cout << "The value of y is : " << y << std::endl;
    std::cout << "sizeof y is : " << sizeof(x) << std::endl;

    return 0;
}