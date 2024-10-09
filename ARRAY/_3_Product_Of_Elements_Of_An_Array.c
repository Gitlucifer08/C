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

    int product = 1;
    printf("product of array --> ");
    for(int j= 0 ; j<n ; j++)
    {
        product *= arr[j] ;
    }
    printf("%d ",product);
    return 0 ;
}
