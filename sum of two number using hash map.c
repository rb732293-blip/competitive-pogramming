
#include <stdio.h>

int main() {
    int n, i, j, target;
    int arr[10000];
    int found = 0;

    scanf("%d", &n);

    if (n < 2 || n > 10000) {
        return 1;
    }

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &target);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }

        if (found == 1) {
            break;
        }
    }

    return 0;
}