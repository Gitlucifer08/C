#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {9,1,3,4,10,5,6} ;
    int n = 7 ;// size of array

    // original array print
    printf("unsorted array is : ");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }

    // ( insertion sort )
    int count = 0;
    for(int i = 1 ; i < n ; i++) // maximum passes for n elements will be " n - 1 " .
    {
        for( int j = i ; j > 0 && arr[j] < arr[j-1] ; j--)// j>0 condition is necessary as when j=0 then arr[j-1] --> arr[-1] not possible or it'll provide error
        {
            count++ ;
            //swap
            int temp = arr[j] ;
            arr[j] = arr[j-1] ;
            arr[j-1] = temp ;
        }

    }

    // SORTED ARRAY
    
    printf("\nnumber of operation is : %d",count);
    printf("\n");
    printf("sorted array is : ");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }
return 0 ;

}

