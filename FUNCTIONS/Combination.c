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
      int n_fact , n_minus_r_fact ,  r_fact ;
    printf("Enter n and r for nCr : ");
    scanf("%d%d",&n,&r);
    n_fact = factorial(n);
    r_fact = factorial(r);   
    n_minus_r_fact = factorial( n - r ); 
    int nCr = n_fact/( r_fact * ( n_minus_r_fact ) );
    printf(" nCr =  %d ",nCr);
    return 0 ;
}

// WITH prototype -->

// #include<stdio.h>

// int factorial(int a);

// int main()
// {
//     int n,r;
//       int n_fact , n_minus_r_fact ,  r_fact ;
//     printf("Enter n and r for nCr : ");
//     scanf("%d%d",&n,&r);
//     n_fact = factorial(n);
//     r_fact = factorial(r);   
//     n_minus_r_fact = factorial( n - r ); 
//     int nCr = n_fact/( r_fact * ( n_minus_r_fact ) );
//     printf(" nCr =  %d ",nCr);
//     return 0 ;
// }

// int factorial(int k)
// {
//     int fact = 1;
//     for(int i = 1 ; i <= k ; i++)
//     {
//         fact *= i ;
//     }
//     return fact; 
// }
