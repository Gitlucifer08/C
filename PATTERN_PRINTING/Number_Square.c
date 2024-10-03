
// enter a number : 5
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 
// 1 2 3 4 5 

#include<stdio.h> 
int main ()
{
    int n,m;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    ;
    for(int i=1;i<=n;i++)  // i -> number of lines or rows
    { 
        for(int j=1;j<=n;j++)  // j -> number of  columns 
        {
            printf("%d ",j);
        }
        printf("\n");  // changes line after each column or number of stars

    }
}
/*
below code will work but here we can't use both rows and colums as they 
will be same hence use above code 
*/
// #include<stdio.h> 
// int main ()
// {
//     int n,m;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     ;
//     for(int i=1;i<=n;i++)  //outer loop -> number of lines or rows
//     { 
//         for(int i=1;i<=n;i++)  // inner loop -> number of stars or columns 
//         {
//             printf("%d ",i);
//         }
//         printf("\n");  // changes line after each column or number of stars

//     }
// }