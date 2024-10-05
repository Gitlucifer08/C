// #include<stdio.h>
// void increasing (int n)
// {
//     if (n==0) return ;
//     printf("%d \n",n);
//     increasing(n + 1);
//     return ;    
// }

// int main ()
// {
//     int n ;
//     printf("enter a number : ");
//     scanf("%d",&n); 
//     increasing(n);
  
//     return 0 ;
// }

// this code will cause an infinite loop (or rather, infinite recursion)
// and eventually lead to a stack overflow.

#include<stdio.h>
void increasing (int x , int y)
{
    if (x>y) return ;
    printf("%d \n",x);
    increasing(x + 1 , y);
    return ;    
}
int main ()
{
    int  m,n;
    printf("enter a starting number : ");
    scanf("%d",&m); 
    printf("enter a  limit  : ");
    scanf("%d",&n); 
    increasing(m,n); 
    return 0 ;
}