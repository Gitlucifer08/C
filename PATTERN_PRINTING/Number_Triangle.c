// enter a number : 4
//  1 
//  1 2 
//  1 2 3 
//  1 2 3 4 

#include<stdio.h>
int main ()
{
    int n;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)  
    { 
        for(int j=1;j<=i;j++)  // main logic 
        {
            printf("%d ",j);   //  need
        }
        printf("\n"); 

    }
}