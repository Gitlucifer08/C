#include<stdio.h>
int main()
{
    int n ;  
    printf("please enter size of an array :");
    scanf("%d",&n);
    int arr[n] ; 
     
   for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]); 
    }

    int max = arr[0];
    for(int j= 0 ; j<n ; j++)
    {
        if( arr[j] > max )
            max = arr[j];
    }
    
    printf("maximum element of the array is : %d ",max);
    return 0 ;
}
