
#include<stdio.h>
#include<stdbool.h>
//#include<limits.h>
int main()
{
    int arr[] = {9,1,3,4,10,5,6} ;
    int n = 7 ;// size of array

    // original array print
    printf("original unsorted array : ");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }

    // Selection sort
    for(int i = 0 ; i < n-1 ; i++)// n-1 passes
    {
        int min_idx = i ;
        int min = arr[i];
        // int min = INT_MAX;
        for(int j = i ; j < n ; j++ )
        {
            // if (min > arr[j])
            // {
            //     min = arr[j] ;
            //     min_idx = j ;
            // } 

            if (arr[j] < arr[min_idx])
            {
                min_idx = j; // Update min_idx to the position of the new minimum
            }  
              
        }
        // now swap the minimum element and first element of unsorted array .
        // swap min_idx and i
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp ;

    }
    

    // SORTED ARRAY 
    printf("\nSorted array :");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }


}