#include<stdio.h>

void increasing (int n)
{
    if (n==0) return ;   // BASE CASE
    // printf("%d \n",n);
    increasing(n - 1);
    printf("%d \n",n);  // JUST BY REPLACING THE POSITION (AFTER RECURSIVE CALL) OF 
    return ;            //DECREASING RECURSIVE FUNCTION IT BECOMES AN INCREAGING FUNCTION .
}

int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n); 
    increasing(n); 
    return 0 ;
}