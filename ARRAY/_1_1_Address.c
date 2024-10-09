// enter value of element 1 : 9
// enter value of element 2 : 8
// enter value of element 3 : 7
// enter value of element 4 : 6
// enter value of element 5 : 5
// address of 9 is : 0061FF04 
// address of 8 is : 0061FF08 
// address of 7 is : 0061FF0C 
// address of 6 is : 0061FF10 
// address of 5 is : 0061FF14 

#include<stdio.h>
int main()
{
   int arr[5] ;
   for(int i=0 ; i<5 ; i++) 
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]);  
    }

    for(int j=0 ; j<5 ; j++)
    {
         printf("address of %d is : %p \n",arr[j],&arr[j]);
    }
    return 0 ;
}
