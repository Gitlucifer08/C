// write a program to reverse the array using an array .

#include <stdio.h>
#include <limits.h> // Include this header for INT_MIN

int main() {
    int n ;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);

    int arr [n];
    int reverse [n];
    

    for (int i = 0; i < n; i++)
     {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
     }

     printf("reverse elements of an array are :\n");

     for (int i = 0; i < n; i++)
     {
        reverse[i] = arr[n-1-i] ;  
     }

     for(int i = 0 ; i < n ; i++)
     {
        arr[i] = reverse[i] ;
        printf("%d \n",arr[i]);
     }

   
    return 0;
}

