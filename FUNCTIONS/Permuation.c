#include<stdio.h>
int factorial(int k)
{
    int fact = 1;
    for(int i = 1 ; i <= k ; i++)
    {
        fact *= i ;
    }
    return fact; 
}

int main()
{
    int n,r;
      int n_fact , n_minus_r_fact  ;
    printf("Enter n and r for nPr : ");
    scanf("%d%d",&n,&r);
    n_fact = factorial(n); 
    n_minus_r_fact = factorial( n - r ); 
    int nPr = n_fact / n_minus_r_fact ;
    printf(" nPr =  %d ",nPr);
    return 0 ;
}