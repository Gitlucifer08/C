// enter  number of line to print  :  4
//       1 
//     1 2 3 
//   1 2 3 4 5 
// 1 2 3 4 5 6 7 

#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++) 
    { 
        int num = 1 ;
        for(int k=1;k<=n-i;k++)   
        {
             printf("  ");         
        }
        for(int j=1;j<=2*i-1;j++)   //!!!!!!!!
        {
             printf("%d ",num);   
             num++;      
        }
         
         printf("\n");  
    }
}

// ALPHABET PYRAMID

// enter  number of line to print  :  5
//         A 
//       A B C 
//     A B C D E 
//   A B C D E F G 
// A B C D E F G H I 
// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     printf("enter  number of line to print  :  ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++) 
//     { 
//         int num = 65 ;
//         for(int k=1;k<=n-i;k++)   
//         {
//              printf("  ");         
//         }
//         for(int j=1;j<=2*i-1;j++)   //!!!!!!!!
//         {
//              printf("%c ",num);   
//              num++;      
//         }
         
//          printf("\n");  
//     }
// }
