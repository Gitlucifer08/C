//given an array of integers , change the value of all odd indexed elements
// to its second multiple (multiply with 2) and increment all even indexed
//value by 10 .
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

    printf("Changed array --> \n");
    for(int k= 0 ; k<n ; k++)
    {
        if(k%2 == 0)
             printf("%d ",arr[k] + 10);
        
        else
            printf("%d ",arr[k] * 2);
    }
    
    return 0 ;
}

