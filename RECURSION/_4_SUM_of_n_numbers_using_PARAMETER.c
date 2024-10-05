// test run (n=4) for better understanding in copy
#include<stdio.h>

void sum(int n , int s)// s will hold sum in each call
{
    if( n == 0 )
    {
        printf("%d",s);
        return ;
    }

    sum(n - 1 , s + n);
    return ;
}

int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n); 
    sum(n,0); //0 is initial value of sum 
    return 0 ;
}