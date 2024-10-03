
// enter  number of line to print  :  4
//      ****
//     ****
//    ****
//   ****

#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) 
    { 
        for(int j=1;j<=n-i;j++)   
        {
            printf(" ");
           
        }
         for(int k=1;k<=n;k++)   
        {
          printf("*");
        }
        printf("\n");  

    }
}

