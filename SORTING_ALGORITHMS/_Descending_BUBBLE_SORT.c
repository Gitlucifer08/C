// for descending bubble sort only change the condition in if ,  if(arr[j] < arr[j+1]) to  if(arr[j] < arr[j+1])


#include<stdio.h>
#include<stdbool.h>
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

    // ( bubble sort for descending )
    
    for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
    {
        // checkmark
        bool flag = true ; // true means array is sorted
        for(int j = 0 ; j < n - 1 - i ; j++ ) 
        {
           if(arr[j] < arr[j+1])// for descending bubble sort > converts to <
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

    // SORTED ARRAY (decending)
    
    printf("\ndescending sorted array :");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }


}