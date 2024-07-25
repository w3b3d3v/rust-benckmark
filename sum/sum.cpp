#include <iostream>
#include <vector>
#include <numeric>

long long sum_large_array() {
    std::vector<long long> arr(500000000);  // Remove digit separators
    std::iota(arr.begin(), arr.end(), 1);
    return std::accumulate(arr.begin(), arr.end(), 0LL);
}

int main() {
    long long sum = sum_large_array();
    std::cout << "Sum: " << sum << std::endl;
    return 0;
}

