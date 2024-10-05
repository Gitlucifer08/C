// do n=3 try run 
#include<stdio.h>

void increasing_decreasing (int n)
{
    if (n==0) return ;   
    printf("%d \n",n);
    increasing_decreasing(n - 1);
    if(n!=1)      // just to prevent the repetion of 1
    printf("%d \n",n);  
    return ;            
}

int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n); 
    increasing_decreasing(n); 
    return 0 ;
}