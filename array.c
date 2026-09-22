#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j;

    // Input elements
    printf("Enter 9 elements:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Display 2D array
    printf("\n2D Array is:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}