// enter a number : 5
//  * 
//  * * 
//  * * * 
//  * * * * 
//  * * * * *


#include<stdio.h>
int main ()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);
    ;
    for(int i=1;i<=n;i++)  // i -> number of lines or rows
    { 
        for(int j=1;j<=i;j++)  // j -> number of  columns 
        {
            printf("* ");
        }
        printf("\n");  // changes line after each column or number of stars

    }
}

// this code below will not work because of same variable 
// i for both rows and columns 
// results an infinite loop


// #include<stdio.h> 
// int main ()
// {
//     int n;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     ;
//     for(int i=1;i<=n;i++)  //outer loop -> number of lines or rows
//     { 
//         for(int i=1;i<=i;i++)  // inner loop -> number of stars or columns 
//         {
//             printf("%d ",i);
//         }
//         printf("\n");  // changes line after each column or number of stars

//     }
// }