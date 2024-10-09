// find the diffrence between the sum of elements at even indices
// to the sum of elements at odd indices 

#include<stdio.h>
int main()
{
    int n,x ;  
    printf("please enter size of an array :");
    scanf("%d",&n);

    int arr[n] ;
    
    int E_Sum = 0 , O_Sum = 0 ;
    int difference ;
     
   for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]); 
    }

  
    for(int k= 0 ; k<n ; k++)
    {
        if( k%2 == 0 )
        {
            E_Sum += arr[k];
        }
        else
        {
            O_Sum += arr[k] ;
        }
    }
    difference = E_Sum - O_Sum ;
    printf("difference is  = %d",difference);
    
    return 0 ;
}

