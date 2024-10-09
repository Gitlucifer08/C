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

    int sum = 0;
    printf("sum of array --> ");
    for(int j= 0 ; j<n ; j++)
    {
        sum = sum + arr[j] ;
    }
    printf("%d ",sum);
    return 0 ;
}
