// Question : Given an integer array and an integer k where k <= size of array,
//            We need to return the kth smallest element of the array.


// using selection sort algo
// let array size is 9
// k is 6 ( 6th smallest element )

#include<stdio.h>
int main()
{
    int arr[9] = {1,5,4,8,9,12,3,48,10};
    int n = 9 ; // size of array 
    int k = 6 ;
    int count = 0;
   
    for (int i = 0 ; i < k - 1 ; i++) // k-1 passes , as no need to sort full array this reduces no. of operations and time complexity will change ( O(n) --> O(k) )
    {
        int min_idx = i , min = arr[i] ;

        for (int j = i ; j < n ; j++)
        {
            count ++;
            if( min > arr[j] )
            {
                min = arr[j] ;
                min_idx = j ;
            }
        }

        //swap
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    
    }
    
    printf("\nnumber of operation is : %d",count);
    printf("\n");
    printf("the %d th smallest element is : %d ",k,arr[k-1]) ;
    
    return 0;
}