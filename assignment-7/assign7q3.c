#include <stdio.h>

int calculate_row_sum(int arr[][10], int rows, int cols, int row) {
    int sum = 0;
    for (int j = 0; j < cols; j++) {
        sum += arr[row][j];
    }
    return sum;
}

int calculate_column_sum(int arr[][10], int rows, int cols, int col) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += arr[i][col];
    }
    return sum;
}

int main() {
    int arr[10][10], rows, cols, row, col;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the 2D array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter the row number: ");
    scanf("%d", &row);
    int row_sum = calculate_row_sum(arr, rows, cols, row);
    printf("Sum of elements in row %d: %d\n", row, row_sum);

    printf("Enter the column number: ");
    scanf("%d", &col);
    int column_sum = calculate_column_sum(arr, rows, cols, col);
    printf("Sum of elements in column %d: %d\n", col, column_sum);

    return 0;
}
