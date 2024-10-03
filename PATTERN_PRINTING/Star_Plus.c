// // NUMBER IS ALWAYS ODD AND START FROM 3 TO SATISFY THE FIGURE

// enter a number  : 5
//      *  
//      *  
//    *****
//      *  
//      *  

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
            if(i==( ( n+1)/2 ) || j==( ( n+1)/2 ))
                 printf("*");
            else
                 printf(" ");
        }
        printf("\n");
    }
}

//EXPLANATION ->

// enter number of rows : 5

//     12345     <-- NUMBER OF COLUMNS
//    1  *  
//    2  *                 WE CAN SEE THAT CONDITION MATCHES (STAR IS PRINTED ) ONLY WHEN EITHER
//    3*****               ROW OR COLUMN IS EQUAL TO THREE SO USE IF-ELSE TO PRINT STAR THERE AND   
//    4  *                 REST IS SPACE   
//    5  *                 HOW TO GET THIS 3 OR MIDDLE NUMBER FOR OTHER VALUES OF N , JUST USE THE 
//                         FORMULA (N+1)/2

// FOR REFERENCE ->

// enter number of rows : 5
//    ##*##
//    ##*##
//    *****
//    ##*##
//    ##*##

// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     printf("enter number of rows : ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=1;j<=n;j++)
//         {
//             if(i==( ( n+1)/2 ) || j==( ( n+1)/2 ))
//                  printf("*");
//             else
//                  printf("#");
//         }
//         printf("\n");
//     }
// }