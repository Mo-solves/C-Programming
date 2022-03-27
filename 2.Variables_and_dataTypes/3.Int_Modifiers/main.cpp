#include <iostream>

int main()
{
    signed int value1{10};
    signed int value2{-300};

    std::cout << "Value1 : " << value1 << std::endl;
    std::cout << "Value2 : " << value2 << std::endl;
    std::cout << "sizeof value1 : " << sizeof(value1) << std::endl;
    std::cout << "sizeof value2 : " << sizeof(value2) << std::endl;

    // Store only positive value
    unsigned int value3{4};
    // unsigned int value4{-5}; // Compiler error

    // short
    short short_var{-32768}; // 2 byte
    short int short_int{455};
    signed short signed_short{122};
    signed short int signed_short_int{-456};
    unsigned short int unsigned_short_int{456};

    // int
    int int_var{55}; // 4 byte
    signed signed_var{66};
    signed int signed_int{77};
    unsigned int unsigned_int{77};

    // long
    long long_var{88}; // 4 or 8 Bytes
    long int long_int{33};
    signed long signed_long{44};
    signed long int signed_long_int{44};
    unsigned long int unsigned_long_int{44};

    long long long_long{888}; // 8 Bytes
    long long int long_long_int{999};
    signed long long signed_long_long{444};
    signed long long int signed_long_long_int{1234};
    unsigned long long int unsigned_long_long_int{1234};

    std::cout << "Print size of short" << std::endl;
    std::cout << "sizeof short_var : " << sizeof(short_var) << std::endl;
    std::cout << "sizeof short_int : " << sizeof(short_int) << std::endl;
    std::cout << "sizeof signed_short : " << sizeof(signed_short) << std::endl;
    std::cout << "sizeof signed_short_int : " << sizeof(signed_short_int) << std::endl;
    std::cout << "sizeof unsigned_short_int : " << sizeof(unsigned_short_int) << std::endl;
    std::cout << "END=================================" << std::endl;

    std::cout << "Print size of int" << std::endl;
    std::cout << "sizeof int_var : " << sizeof(int_var) << std::endl;
    std::cout << "sizeof signed_var : " << sizeof(signed_var) << std::endl;
    std::cout << "sizeof signed_int : " << sizeof(signed_int) << std::endl;
    std::cout << "sizeof unsigned_int : " << sizeof(unsigned_int) << std::endl;
    std::cout << "END=================================" << std::endl;

    std::cout << "Print size of long" << std::endl;
    std::cout << "sizeof long_var : " << sizeof(long_var) << std::endl;
    std::cout << "sizeof long_int : " << sizeof(long_int) << std::endl;
    std::cout << "sizeof signed_long : " << sizeof(signed_long) << std::endl;
    std::cout << "sizeof signed_long_int : " << sizeof(signed_long_int) << std::endl;
    std::cout << "sizeof unsigned_long_int : " << sizeof(unsigned_long_int) << std::endl;
    std::cout << "END=================================" << std::endl;

    std::cout << "Print size of long long" << std::endl;
    std::cout << "sizeof long_long : " << sizeof(long_long) << std::endl;
    std::cout << "sizeof long_long_int : " << sizeof(long_long_int) << std::endl;
    std::cout << "sizeof signed_long_long : " << sizeof(signed_long_long) << std::endl;
    std::cout << "sizeof signed_long_long_int : " << sizeof(signed_long_long_int) << std::endl;
    std::cout << "sizeof unsigned_long_long_int : " << sizeof(unsigned_long_long_int) << std::endl;

    return 0;
}