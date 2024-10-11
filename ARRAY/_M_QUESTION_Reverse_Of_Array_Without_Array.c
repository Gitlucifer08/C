// write a program to reverse the array without using an array .

#include <stdio.h>
#include <limits.h> 

void reverse(int arr[] , int n)
{
    int i = 0 , j = n - 1 ;

    while( i < j )
    {
        int  temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i++ ;
        j-- ;

    }

    // for(int i = 0 , j = n - 1 ; i < j ; i++ ,j--)   //alternative of while loop
    // {
    //     int  temp = arr[i] ;
    //     arr[i] = arr[j] ;
    //     arr[j] = temp ;
    // }

}

int main()
{
    int n ;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
    int arr [n];
  for (int i = 0; i < n; i++)
     {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
     }

    reverse( arr , n );

     for(int i = 0 ; i < n ; i++)
     {
        printf("%d \n",arr[i]);
     }

   
    return 0;
}

