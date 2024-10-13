// PATTERN 1 -->

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

    // Display matrix with alternate rows in reverse order
    printf("Matrix printed with alternate rows in reverse order:\n");
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) { // Print row left-to-right for even-indexed rows
            for (int j = 0; j < n; j++) {
                printf("%d ", arr[i][j]);
            }
        } else { // Print row right-to-left for odd-indexed rows
            for (int j = n - 1; j >= 0; j--) {
                printf("%d ", arr[i][j]);
            }
        }
        //printf("\n");
    }

    return 0;
}


// PATTERN 2 -->

// #include<stdio.h>

// int main() {
//     int m, n;

//     // Input dimensions for the matrix
//     printf("Enter number of rows of matrix: ");
//     scanf("%d", &m);
//     printf("Enter number of columns of matrix: ");
//     scanf("%d", &n);

//     int arr[m][n];

//     // Input matrix elements
//     printf("Enter elements of the matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("Enter element at (%d,%d): ", i, j);
//             scanf("%d", &arr[i][j]);
//         }
//     }

//     // Display the original matrix
//     printf("Original matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", arr[i][j]);
//         }
//         printf("\n");
//     }

//     // Display matrix in top-down wave pattern
//     printf("Matrix printed in top-down wave pattern:\n");
//     for (int j = 0; j < n; j++) {
//         if (j % 2 == 0) { // For even-indexed columns, top to bottom
//             for (int i = 0; i < m; i++) {
//                 printf("%d ", arr[i][j]);
//             }
//         } else { // For odd-indexed columns, bottom to top
//             for (int i = m - 1; i >= 0; i--) {
//                 printf("%d ", arr[i][j]);
//             }
//         }
//         //printf("\n");
//     }

//     return 0;
// }
