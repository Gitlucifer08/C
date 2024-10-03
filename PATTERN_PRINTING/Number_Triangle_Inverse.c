// enter a number : 4
//  1 2 3 4 
//  1 2 3 
//  1 2 
//  1 

#include<stdio.h>
int main ()
{
    int n,a;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    a=n;
    for(int i=1;i<=n;i++)  
    { 
        for(int j=1;j<=a;j++)  // main logic 
        {
            printf("%d ",j);
        }
        a--;                   // need
        printf("\n"); 

    }
}