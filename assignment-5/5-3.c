#include <stdio.h>

void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;

    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
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

    reverseArray(arr, size);

    printf("Reversed array:\n");
    printArray(arr, size);

    return 0;
}
