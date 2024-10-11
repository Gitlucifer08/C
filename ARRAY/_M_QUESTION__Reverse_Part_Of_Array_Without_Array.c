// write a program to reverse part of the array without using an array .
// example --> skip first and last element to skip

#include <stdio.h>
#include <limits.h> 

void reverse(int arr[] , int n , int a ,int b)
{
    // int i = a , j = b ; // just change index value accordingly

    // while( i < j )
    // {
    //     int  temp = arr[i] ;
    //     arr[i] = arr[j] ;
    //     arr[j] = temp ;
    //     i++ ;
    //     j-- ;

    // }

    for(int i = a , j = b ; i < j ; i++ ,j--)   //alternative of while loop
    {
        int  temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
    }

}

int main()
{
    int n , a , b ;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
     int arr [n];
    
     for (int i = 0; i < n; i++)
     {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
     }



    printf("enter starting point to reverse : ");
    scanf("%d", &a);
    
    printf("enter end point to reverse : ");
    scanf("%d", &b);

    // Check if the indices are valid
    if (a >= 0 && a < n && b >= 0 && b < n && a <= b)   // Ensure a <= b
    {                                                   
        reverse(arr, n, a, b);

        printf("Array after reversal:\n");
        for (int i = 0; i < n; i++) {
            printf("%d\n", arr[i]);
        }

    }    else {
             printf("Invalid indices. Please enter valid indices within the array bounds.\n");
    }
   
    return 0;
}

