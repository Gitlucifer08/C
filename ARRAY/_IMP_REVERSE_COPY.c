// write a program to copy the contents of one array into another in the reverse array
#include<stdio.h>
int main()
{
    int n ; 
    printf("please enter size of an array :");//dont define array before getting the value of n in this case else an error
    scanf("%d",&n);
    int arr[n] ;
    int copy[n]; 
     
   for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]);  
    }

   
    for(int j=0 ; j<n ; j++)
    {
        copy[j] = arr[n-1-j];
    }
    printf("elements of reverse copy of given array :\n "); 
    for(int j =0 ;j < n ; j++ )
    {
        printf("%d \n",copy[j]);
    }
    
    return 0 ;
}
