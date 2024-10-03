// enter a number : 5 
//  * * * * * 
//  * * * * 
//  * * * 
//  * * 
//  * 
#include<stdio.h>
int main ()
{
    int n;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)  
    { 
        for(int j=1;j<=( n + 1 - i );j++)  // main logic 
        {
            printf("* ");
        }
        printf("\n"); 

    }
}

// EXPLANATION ->
// enter a number : 5 
//  i                 j               so ,
//  1    * * * * *    5                     i + j = n + 1
//  2    * * * *      4                     i     = n + 1 - j         where , 
//  3    * * *        3                                                          i is rows
//  4    * *          2                                                          j is columns
//  5    *            1

// another way

// #include<stdio.h>
// int main ()
// {
//     int n,a;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     a=n;
//     for(int i=1;i<=n;i++)  
//     { 
//         for(int j=1;j<=a;j++)  // main logic 
//         {
//             printf("* ");
//         }
//         a--;                   // need
//         printf("\n"); 

//     }
// }

// CAUTION ->

// dont use n in place of a like
//  for(int j=1;j<=n;j++)  and  n--; 