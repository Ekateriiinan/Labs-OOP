#include "To_Binary.h"
#include <vector>

std::vector<int> ToBinaryArray(unsigned int n) {
    constexpr int Num = 32;
    std::vector<int> result;
    result.reserve(Num);
    
    for (int i = Num - 1; i >= 0; --i) {
        result.push_back((n >> i) & 1);
    }
    
    return result;
}
