// enter  number of line to print  : 5
// 1 
// 3 5 
// 7 9 11 
// 13 15 17 19 
// 21 23 25 27 29 

#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter  number of line to print  : ");
    scanf("%d",&n);
    int a=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("%d ",a);
            a+=2;
        }
        printf("\n");

    }
}