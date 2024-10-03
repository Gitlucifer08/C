// MATHOD 1 -->

// enter  number of line to print  :  4
//    *
//   ***
//  *****
// *******

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
        for(int k=1;k<=i;k++)  
        {
             printf("*");
           
        }
         for(int l=1;l<=i-1;l++)  
        {
             printf("*");
           
        }
         
         printf("\n");  
    }
}

// MATHOD 2 -->

// enter  number of line to print  :  4
//      *
//     ***
//    *****
//   *******

// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     printf("enter  number of line to print  :  ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++) 
//     { 
//         for(int k=1;k<=n-i;k++)   
//         {
//              printf(" ");         
//         }
//         for(int j=1;j<=2*i-1;j++)   //!!!!!!!!
//         {
//              printf("*");         
//         }
         
//          printf("\n");  
//     }
// }

// MATHOD 3 -->

// enter  number of line to print  :  4
//      *
//     ***
//    *****
//   *******

// #include<stdio.h>
// int main ()
// {
//     int n,m,no_of_star=1;
//     printf("enter  number of line to print  :  ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++) 
//     { 
//         for(int k=1;k<=n-i;k++)   
//         {
//              printf(" ");         
//         }
//         for(int j=1;j<=no_of_star;j++)   //!!!!!!!!
//         {
//              printf("*");         
//         }
//         no_of_star+=2;
         
//          printf("\n");  
//     }
// }

// MATHOD 4 -->

// enter  number of line to print  :  4
//      *
//     ***
//    *****
//   *******

// #include<stdio.h> 
// int main ()
// {
//     int n, no_of_spaces, no_of_star;
//     printf("enter number of line to print: ");
//     scanf("%d", &n);
//     no_of_spaces = n - 1;
//     no_of_star = 1;
    
//     for (int i = 1; i <= n; i++) 
//     {
//         // Printing spaces
//         for (int j = 1; j <= no_of_spaces; j++)   
//         {
//             printf(" ");         
//         }
//         no_of_spaces--;

//         // Printing stars
//         for (int k = 1; k <= no_of_star; k++) 
//         {
//             printf("*");
//         }
//         no_of_star += 2;
        
//         printf("\n");  
//     }
// }
