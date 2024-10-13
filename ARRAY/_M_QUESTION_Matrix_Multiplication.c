// write a program to print the multiplication of two matrices given by the user .


#include<stdio.h>

int main()
{
    int r1, c1, r2, c2;

    // Input dimensions for matrix 1
    printf("Enter number of rows of matrix 1: ");
    scanf("%d", &r1);
    printf("Enter number of columns of matrix 1: ");
    scanf("%d", &c1);

    // Input dimensions for matrix 2
    printf("Enter number of rows of matrix 2: ");
    scanf("%d", &r2);
    printf("Enter number of columns of matrix 2: ");
    scanf("%d", &c2);

    // Check if multiplication is possible
    if (c1 != r2) 
    {
        printf("Invalid choice. Columns of matrix 1 should be equal to rows of matrix 2.\n");
        return 0;
    }

    int arr1[r1][c1], arr2[r2][c2], result[r1][c2];

    // Input matrix 1 elements
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c1; j++) 
        {
            printf("Enter element at (%d,%d): ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input matrix 2 elements
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < r2; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("Enter element at (%d,%d): ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Initialize result matrix to 0
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            result[i][j] = 0;
        }
    }

    // Matrix multiplication
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            for (int k = 0; k < c1 /* or r2 */; k++) 
            {
                result[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }

    // Display result matrix
    printf("Result of matrix multiplication:\n");
    for (int i = 0; i < r1; i++) 
    {
        for (int j = 0; j < c2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
