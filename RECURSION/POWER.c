#include<stdio.h>

int power(int x , int y)
{
    int m = 1 ;
    // for(int i =1 ; i <= y ;i++)
    // m = m*x ;
    if ( y==0 ) return 1;
    int pow = x * power(x,y-1);  // or directly return  x * power(x,y-1);
    return pow ;        
}

int main ()
{
    int a,b;
    printf("enter base : ");
    scanf("%d",&a); 
    printf("enter exponent : ");
    scanf("%d",&b); 
    int p = power(a,b); 
    printf("%d raised to the power %d is : %d",a,b,p);
    return 0 ;
}