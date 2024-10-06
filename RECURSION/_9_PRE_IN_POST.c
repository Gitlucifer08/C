

#include<stdio.h>

void PRE_IN_POST(int n)
{
    if(n == 0)
        return ;

   printf("PRE %d\n",n);
   PRE_IN_POST(n-1);
   printf("IN %d\n",n);
   PRE_IN_POST(n-1);
   printf("POST %d\n",n);
   return ;
}

int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);

    PRE_IN_POST(n);
    return 0 ;
}
