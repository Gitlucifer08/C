// enter a number : 5
// 1 
// A B 
// 1 2 3 
// A B C D 
// 1 2 3 4 5 

#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter a number : ");
    scanf("%d",&n);
    
    
    for(int i=1;i<=n;i++)  
    { 
        int a=1;
        if(i%2==0)
        {
        for(int j=1;j<=i ;j++) 
            {
                 printf("%c ",a+64);    // main logic 
                 a++;               
             }
        }
        else
        {
            for(int j=1;j<=i;j++)
                printf("%d ",j);
        }     
                        
        printf("\n"); 
        
        
    }
}