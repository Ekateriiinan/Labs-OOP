#include "To_Binary.h"

#include <iostream>
#include <vector>

int main() {
    unsigned long long t; 
    std::cin >> t;
    if (t > 4294967295) {
        std::cout << "That's too high a number";
    } else {
        std::vector<int> rez = ToBinaryArray(static_cast<unsigned int>(t));
        for (int bit : rez) {
            std::cout << bit;
        }
    }
    std::cout << std::endl;
    return 0;

}
