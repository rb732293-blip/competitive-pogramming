#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int key, low = 0, high = 4, mid;
    int found = 0;

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element found at position %d\n", mid + 1);
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (!found)
        printf("Element not found\n");

    return 0;
}