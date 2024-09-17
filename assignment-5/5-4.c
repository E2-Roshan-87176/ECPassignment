#include <stdio.h>

int findMaximum(int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}
void acceptArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size > 100) {
        printf("Size exceeds the maximum allowed limit of 100.\n");
        return 1;
    }

    acceptArray(arr, size);

    printf("Original array:\n");
    printArray(arr, size);

    int maximum = findMaximum(arr, size);
    printf("Maximum element: %d\n", maximum);

    return 0;
}

