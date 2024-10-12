// if an array contains n elements , then check if the given array is a palindrome(ex 12321) or not .

// write a program to reverse the array using an array .

#include <stdio.h>
#include <limits.h> // Include this header for INT_MIN

void reverse(int arr[] , int n)
{
    int i = 0 , j = n - 1 ;

    while( i < j )
    {
        if( arr[i]==arr[j] )
        {
        int  temp = arr[i] ;
        arr[i] = arr[j] ;
        arr[j] = temp ;
        i++ ;
        j-- ;
        printf("array is palindrome ");
        break;
        }
        else
        {
             printf("array is not palindrome ");
             break;
        }

    }

    // for(int i = 0 , j = n - 1 ; i < j ; i++ ,j--)   //alternative of while loop
    // {

    //    if( arr[i]==arr[j] )
    //    {
    //      int  temp = arr[i] ;
    //     arr[i] = arr[j] ;
    //     arr[j] = temp ;
    //     printf("array is palindrome ");
    //     break;
    //    }
    //    else
    //    {
    //         printf("array is not palindrome ");
    //         break;
    //    }
               
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
  
    return 0;
}

