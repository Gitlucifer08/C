// QUESTION : write a program to take n number of integers as input
//            and display them .

#include<stdio.h>
#include<stdlib.h>
int main()
{
    // METHOD-1
    int n; // size of int is 4 bytes
    printf("enter number of integers you want : \n");
    scanf(" %d",&n);
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

    int* ptr = (int*) malloc(n*sizeof(int));
    int* p = ptr; // done to preserve the address of ptr ( it will be lost during scanf beacuse of ptr++ ) as we need it to print the array .

    printf("\nenter integers : \n");
    for(int i = 0 ; i < n ;i++)
    {
        scanf("%d",&(*ptr));
        ptr++;
    }

    int* t = p;
    printf("\nprinting the elements of an array : ");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",*(p));
        p++ ;
    }
   

    return 0 ;
} 