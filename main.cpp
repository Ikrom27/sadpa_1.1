#include <iostream>
#include <bitset>
#include <string>


std::string to_bin(int num) {
    return std::bitset<8>(num).to_string();
}


void task1() {
    const int def_num = 0x5f0;
    const int mask = 0b1010101010101010;    // не четные номера
    std::cout << "Число: " << def_num << to_bin()
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
