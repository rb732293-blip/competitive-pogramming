#include <stdio.h>

int main() {
    int n, i, j, k;
    int arr[100000], result[100000];
    int found;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    k = 0;

    for (i = 0; i < n; i++) {
        found = 0;

        for (j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                found = 1;
                break;
            }
        }

        if (found == 0) {
            result[k] = arr[i];
            k++;
        }
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i < k; i++) {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}