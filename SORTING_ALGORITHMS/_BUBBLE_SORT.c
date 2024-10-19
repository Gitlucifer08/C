#include<stdio.h>
int main()
{
    int arr[5] = {5,4,3,2,1} ;
    int n = 5 ;// size of array

    // original array print
    for(int i = 0 ; i < 5 ;i++)
    {
        printf("%d ",arr[i]);
    }

    // ( bubble sort )
    for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
    {
        for(int j = 0 ; j < n - 1 ; j++ )// as we are using j+1 so we will reach upto n so don't worry about n-1 .
        {
           if(arr[j] > arr[j+1])
           {
            int temp = arr[j];
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;
           } 
        }

    }

    // SORTED ARRAY
    printf("\n");
    for(int i = 0 ; i < 5 ;i++)
    {
        printf("%d ",arr[i]);
    }


}//1hr 40 mins