// write a program to add two matrices (dimension of all should be same in order to perform matrix addition) 

#include<stdio.h>
int main()
{
    int arr1[3][3] = {1,2,3,4,5,6,7,8,9} ;
    int arr2[3][3] = {9,11,10,8,7,9,7,7,5} ;
    int arr_sum[3][3];

    for(int i = 0 ; i<3 ; i++)
    {
        for(int j = 0 ; j<3 ; j++)
        {
            arr_sum[i][j] = arr1[i][j] + arr2[i][j] ;
            printf("%d ", arr_sum[i][j]);
        }
        printf("\n");
    }

    //   for(int i = 0 ; i<3 ; i++)
    // {
    //     for(int j = 0 ; j<3 ; j++)
    //     {
    //         printf("%d ",arr_sum[i][j]);
    //     }
    //     printf("\n");
    // }
    
}