// count the number of elements in given array greater tahn a given number x

#include<stdio.h>
int main()
{
    int n,x ;  
    printf("please enter size of an array :");
    scanf("%d",&n);

    int arr[n] ;
    
    printf("Enter the value of x to count elements greater than  x:");
    scanf("%d",&x); 
     
   for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]); 
    }

    printf("elements greater than %d in an array are --> \n",x);
    int count = 0 ;
    for(int k= 0 ; k<n ; k++)
    {
        if( x < arr[k] )
        {
            count++ ;
            printf("%d ",arr[k]);
       
        }
    }
    printf("\ncount = %d ",count);
    
    return 0 ;
}

