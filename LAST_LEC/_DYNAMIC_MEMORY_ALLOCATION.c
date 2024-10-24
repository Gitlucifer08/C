#include<stdio.h>
#include<stdlib.h>
int main()
{
    // // METHOD-1
    // int n; // size of int is 4 bytes
    // printf("enter size of array : \n");
    // scanf(" %d",&n);
    // int arr[n]; // n*4 bytes , here memory is allocated during the run time of the program .
    // printf("\nenter array elements : ");
    // for(int i = 0 ; i < n ;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    // printf("\nprinting the elements of an array : ");
    // for(int i = 0 ; i < n ;i++)
    // {
    //     printf("%d ",arr[i]);
    // }

    // METHOD-2 (should include its header file #include<stdlib.h>  )
    int* ptr = (int*) malloc(10*4); // 4 is size of int , and 10 is number of integers to store
    printf("%d",*ptr);

    return 0 ;
}