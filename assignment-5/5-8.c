#include <stdio.h>

int linearSearch(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {10, 5, 15, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 15;

    int result = linearSearch(arr, n, x);

    if (result == -1) {
        printf("%d is not present in array\n", x);
    } else {
        printf("%d is present at index %d\n", x, result);
    }

    return 0;
}
