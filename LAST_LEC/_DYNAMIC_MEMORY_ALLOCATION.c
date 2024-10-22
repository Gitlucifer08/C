#include<stdio.h>
int main()
{
    int n; // size of int is 4 bytes
    printf("enter size of array : ");
    scanf(" %d",&n);
    int arr[n]; // n*4 bytes
    printf("\nenter array elements : ");
    for(int i = 0 ; i < n ;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\nprinting the elements of an array : ");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d",arr[i]);
    }

    return 0 ;
}