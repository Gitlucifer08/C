// Ques: Given an array of digits (values are from 0 to 9), the task is to find the minimum
//       possible sum of two numbers formed from digits of the array.Please note that 
//       all digits of the given array must be used to form the two numbers.


#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {7,4,2,6,9,8,5,1,3,0} ;
    int n = 10 ;// size of array

    // original array print
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }

    // ( bubble sort algo)
    int count = 0;
    for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
    {
        
        // checkmark
        bool flag = true ; // true means array is sorted
        for(int j = 0 ; j < n - 1 - i ; j++ ) 
        {
            count ++ ;
           if(arr[j] > arr[j+1])
           {
            int temp = arr[j];
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;
            flag = false ; // if swapping is done than array is not sorted so change flag to false
           } 
        }
        if( flag == true)
            break ;

    }

    // SORTED ARRAY
    
    printf("\nNumber of operation is : %d",count);
    printf("\n");
    printf("smallest number : ");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d",arr[i]);
    }

    printf("\n");
    printf("second smallest number : ");
    // swap of n and n-1 term
    int temp1 = arr[n];
    arr[n] = arr[n-1];
    arr[n-1] = temp1 ;

    for(int i = 0 ; i < n ;i++)
    {
        printf("%d",arr[i]);
    }
    

    


}