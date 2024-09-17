#include <stdio.h>

void accept_2D_array(int arr[][10], int rows, int colm) {
    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_2D_array(int arr[][10], int rows, int colm) {
    printf("The 2D array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colm; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[10][10], rows, colm;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &colm);

    accept_2D_array(arr, rows, colm);
    print_2D_array(arr, rows, colm);

    return 0;
}
