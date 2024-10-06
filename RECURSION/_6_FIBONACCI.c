do try run in copy for n = 5
#include<stdio.h>

int fibo(int n)
{
    if (n==1 || n==2) return 1 ; // or if(n<=2)
    int ans1 = fibo(n-1);
    int ans2 = fibo(n-2);
    int ans = ans1 + ans2 ; // or ans = fibo(n-1) + fibo(n-2) ;
    return ans ;

}

int main ()
{
    int n; 
    printf("enter a number of term you want to find of a fibonacci series : ");
    scanf("%d",&n);   
    printf("%d",fibo(n));
    return 0 ;
}