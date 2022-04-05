#include <iostream>
#include <bitset>

int main()
{
    unsigned short int data{15};

    std::cout << "Data (dec) : " << std::showbase << std::dec << data << std::endl;
    std::cout << "Data (oct) : " << std::showbase << std::oct << data << std::endl;
    std::cout << "Data (hex) : " << std::showbase << std::hex << data << std::endl;
    std::cout << "Data (bin) : " << std::bitset<16>(data) << std::endl;

    return 0;
}