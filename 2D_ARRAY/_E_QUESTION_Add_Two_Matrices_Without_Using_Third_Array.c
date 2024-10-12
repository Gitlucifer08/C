// write a program to add two matrices without using extra array (dimension of all should be same in order to perform matrix addition) 

#include<stdio.h>

int main() {
    int n, m;

    // Input matrix dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int arr1[n][m], arr2[n][m];

    // Input first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Add the second matrix to the first one (in-place addition)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr1[i][j] += arr2[i][j];  // Adding corresponding elements
        }
    }

    // Print the result (updated arr1)
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    return 0;
}
