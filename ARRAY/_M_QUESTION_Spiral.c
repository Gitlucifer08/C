#include<stdio.h>

int main() {
    int m, n;

    // Input dimensions for matrix
    printf("Enter number of rows of matrix: ");
    scanf("%d", &m);
    printf("Enter number of columns of matrix: ");
    scanf("%d", &n);

    int arr[m][n];

    // Input matrix elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element at (%d,%d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display the original matrix
    printf("Original matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");

    // Spiral print
    int min_row = 0, max_row = m - 1, min_column = 0, max_column = n - 1;
    int total_elements = m * n;
    int count = 0;

    while (count < total_elements) {
        // Print the minimum row
        for (int j = min_column; j <= max_column && count < total_elements; j++) {
            printf("%d ", arr[min_row][j]);
            count++;
        }
        min_row++;

        // Print the maximum column
        for (int i = min_row; i <= max_row && count < total_elements; i++) {
            printf("%d ", arr[i][max_column]);
            count++;
        }
        max_column--;

        // Print the maximum row
        for (int j = max_column; j >= min_column && count < total_elements; j--) {
            printf("%d ", arr[max_row][j]);
            count++;
        }
        max_row--;

        // Print the minimum column
        for (int i = max_row; i >= min_row && count < total_elements; i--) {
            printf("%d ", arr[i][min_column]);
            count++;
        }
        min_column++;
    }

    return 0;
}
