#include<stdio.h>

int sum(int n)
{
    if (n==1) return 1 ;
    
    int s = n + sum(n-1);
    return s ;    
}

int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);
    int v = sum(n);
    printf("sum of first %d natural numbers is %d",n,v);
    return 0 ;
}
