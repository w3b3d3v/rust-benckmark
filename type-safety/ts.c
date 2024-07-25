#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int sum = 0;

    // Accessing out-of-bounds index
    for (int i = 0; i <= 7; i++) {  // Incorrectly using <= instead of <
        sum += arr[i];
    }

    printf("Sum: %d\n", sum);  // This may produce a wrong result due to out-of-bounds access
    return 0;
}

