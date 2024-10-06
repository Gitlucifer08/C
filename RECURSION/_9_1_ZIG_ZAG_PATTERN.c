// same as PRE_IN_POST

// output -->

// enter a number : 2
// 2 1 1 1 2 1 1 1 2

// enter a number : 3
// 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3

#include<stdio.h>

void zig_zag(int n)
{
    if(n == 0)
        return ;

   printf("%d ",n);
   zig_zag(n-1);
   printf("%d ",n);
   zig_zag(n-1);
   printf("%d ",n);
   return ;
}

int main ()
{
    int n ;
    printf("enter a number : ");
    scanf("%d",&n);

    zig_zag(n);
    return 0 ;
}
