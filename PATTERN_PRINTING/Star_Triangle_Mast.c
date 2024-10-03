// enter  number of line to print  :  4
//      *
//     **
//    ***
//   ****

// METHOD 1 -->


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
           if (i+j>=n+1) printf("*");
           else printf(" ");
        }
        printf("\n");  

    }
}

// MATHOD 2 --> ( IMPORTANT )

// enter  number of line to print  :  4
//      *
//     **
//    ***
//   ****

// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     printf("enter  number of line to print  :  ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++) 
//     { 
//         for(int j=1;j<=n-i;j++)   // FOR SPACES 
//         {
//              printf(" ");      // TO ANALYZE BETTER DO printf("#");
           
//         }
//         for(int k=1;k<=i;k++)   // PRINTS RIGHT AFTER J DO NOT OVERLAP !!!!
//         {
//              printf("*");
           
//         }
         
//          printf("\n");  
//     }
// }