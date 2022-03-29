#include <iostream>

int main()
{
    constexpr int SOME_LIB_MAJOR_VERSION{123};

    constexpr int eye_count{2};

    constexpr double PI{3.14};

    std::cout << "eye count : " << eye_count << std::endl;
    std::cout << "PI : " << PI << std::endl;

    // int leg_count {2}; // Non constexpr
    // leg_count is not known at compile time
    // constexpr int arm_count {leg_count}; // Error

    constexpr int room_count{10};
    constexpr int door_count{room_count}; // Ok

    const int table_count{5};
    constexpr int char_count{table_count * 5}; // Works

    // Compile time checks
    static_assert(SOME_LIB_MAJOR_VERSION == 123);
    std::cout << "App doing its thing..." << std::endl;

    return 0;
}