// enter a number  : 5
//   *   *
//    * *
//     *
//    * *
//   *   *
#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if( i==j || i+j==n+1 )  // analyze the condion by drawing rough sketch and writing values 
                 printf("*");       // rows (1,2,3...) and columns (1,2,3...) and form the cases that are 
            else                    // forming the figure
                 printf(" ");
        }
        printf("\n");
    }
}

//EXPLANATION ->

// enter a number  : 3
//     123                CONDITION 1: WHEN i == j
//   1 * *                CONDITION 2: WHEN i+j == n+1   example 
//   2  *                                                  1+3=n+1 ,here n=3
//   3 * *