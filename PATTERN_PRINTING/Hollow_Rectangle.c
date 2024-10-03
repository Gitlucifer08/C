// enter number of rows : 4
// enter number of columns : 15
//    ***************
//    *             *
//    *             *
//    ***************
#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("enter number of columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if( i==1 || i==n || j==1 || j==m ) // just analyze the values of rows where you want 
                 printf("*");                  // to print the stars put that condition in if-block
            else
                 printf(" ");
        }
        printf("\n");
    }
}