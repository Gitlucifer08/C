#include<stdio.h>
int main()
{
   int arr[5] ;
   for(int i=0 ; i<5 ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]);  // never use anything except format specifier in string of scanf like \n,\t
    }

    for(int j=0 ; j<5 ; j++)
    {
         printf("VALUE at index %d is : %d \n",j,arr[j]);
    }
    return 0 ;
}
