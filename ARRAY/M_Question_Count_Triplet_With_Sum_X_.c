// find the total number of triplets in the array whose sum is equal 
// to the given value x 

#include<stdio.h>
int main()
{
    int n,x ;  
    printf("please enter size of an array :");
    scanf("%d",&n);

    int arr[n] ; 
    for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]); 
    }
      
    printf("Enter the value of x to find the total pairs  in the array whose sum is equal to x :");

    scanf("%d",&x); 
    int count = 0 ;

   for(int k = 0 ; k<n ; k++ ) 
   { 
        for(int i=0 ; i<n ; i++)
        {
             for( int j = 0 ; j<n ; j++ )
             {
                 if(arr[i] + arr[j] + arr[k] == x)
                 {
                    printf("(%d,%d,%d)\n",arr[k],arr[i],arr[j]); // to print the pair
                    count++ ;
                 }
                        
             }
        
        }
       
   }
    printf("total pairs are : %d",count) ;

    return 0 ;
}