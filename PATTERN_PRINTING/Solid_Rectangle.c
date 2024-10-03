
// enter number of rows  : 4
// enter number of columns : 3
// * * * 
// * * * 
// * * * 
// * * * 

#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter number of rows  : ");
    scanf("%d",&n);
    printf("enter number of columns : ");
    scanf("%d",&m);
    for(int i=1;i<=n;i++)  //outer loop -> number of lines or rows
    { 
        for(int j=1;j<=m;j++)  // inner loop -> number of stars or columns 
        {
            printf("* ");
        }
        printf("\n");  // changes line after each column or number of stars

    }
}


/*
#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter a number : ");
    scanf("%d",&n);
   
    for(int i=1;i<=n;i++)  //outer loop -> number of lines or rows
    { 
        for(int j=1;j<=n;j++)  // inner loop -> number of stars or columns 
        {
            printf("*");
        }
        printf("\n");  // changes line after each column or number of stars

    }
}
*/