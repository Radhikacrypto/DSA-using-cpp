#include <iostream>
#include <cmath>
#include <climits>  // For INT_MAX

int findComplement(int num) {
    if (num == 0) {
        return 1;
    }
    
    // Find the number of bits in the binary representation of num
    int bit_length = static_cast<int>(log2(num)) + 1;
    
    // Create a mask with all bits set to 1 of the same length as num's binary representation
    unsigned int mask = (1U << bit_length) - 1;
    
    // XOR num with mask to get the complement
    int complement = num ^ mask;
    
    return complement;
}

int main() {
    int num = 1;
    std::cout << "The complement of " << num << " is " << findComplement(num) << std::endl;
    return 0;
}
