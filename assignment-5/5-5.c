#include <stdio.h>

void findMinMax(int arr[], int n, int *max, int *min) {
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        } else if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int arr[] = {10, 5, 15, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max, min;

    findMinMax(arr, n, &max, &min);

    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
