// dry run for n = 5 and 6
#include<stdio.h>
int power_log(int a , int b)
{
    if ( b==1 ) return a;
    int x = power_log(a,b/2);   // this prevents dual recursion of power_log function
    if(b%2 == 0)                // ex , pow = power_log(a,b/2) * power_log(a,b/2) ;   
        return x*x ;
    else
    return a*x*x ;
}

int main ()
{
    int a,b;
    printf("enter base : ");
    scanf("%d",&a); 
    printf("enter exponent : ");
    scanf("%d",&b); 
    int p = power_log(a,b); 
    printf("%d raised to the power %d is : %d",a,b,p);
    return 0 ;
    
}
    