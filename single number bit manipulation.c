#include <stdio.h>

int main() {
    int n, i;
    int nums[30000];
    int result = 0;

    // Read the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Read the array elements
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find the single number using XOR
    for (i = 0; i < n; i++) {
        result = result ^ nums[i];
    }

    // Print the result
    printf("Single number: %d\n", result);

    return 0;
}