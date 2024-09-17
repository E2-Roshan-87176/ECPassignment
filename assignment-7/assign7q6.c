#include <stdio.h>
#include <stdlib.h>

int **allocate_2d_matrix(int rows, int cols) {
    int **matrix;
    int i;

    matrix = (int **)malloc(rows * sizeof(int *));
    if (matrix == NULL) {
        fprintf(stderr, "Memory allocation failed for rows.\n");
        return NULL;
    }

    for (i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
        if (matrix[i] == NULL) {
            fprintf(stderr, "Memory allocation failed for row %d.\n", i);
            // Free previously allocated rows
            for (int j = 0; j < i; j++) {
                free(matrix[j]);
            }
            free(matrix);
            return NULL;
        }
    }

    return matrix;
}

void free_2d_matrix(int **matrix, int rows) {
    int i;

    // Free each row
    for (i = 0; i < rows; i++) {
        free(matrix[i]);
    }

    free(matrix);
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **matrix = allocate_2d_matrix(rows, cols);

    if (matrix != NULL) {
        // Initialize or use the matrix
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                matrix[i][j] = i * cols + j;
            }
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("%d ", matrix[i][j]);
            }
            printf("\n");
        }

        free_2d_matrix(matrix, rows);
    }

    return 0;
}
