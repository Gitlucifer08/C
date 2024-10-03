
#include<stdio.h>
int main ()
{
    int n,m;
    int a=65;        // KEY STEP
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
             printf("%c",a);
           
        }
         a++;
         printf("\n");  
    }
}

// PATTERN 2-->

// enter  number of line to print  :  4
//      A
//     BC
//    DEF
//   GHIJ

// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     int a=65;                                       //KEY STEP
//     printf("enter  number of line to print  :  ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++) 
//     { 
//         for(int j=1;j<=n-i;j++)    
//         {
//              printf(" ");     
//         }
//         for(int k=1;k<=i;k++)  
//         {
//              printf("%c",a);
//              a++;
//         }
        
//          printf("\n");  
//     }
// }

// PATTERN 3-->

// enter  number of line to print  :  4
//      A
//     AB
//    ABC
//   ABCD


// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     printf("enter  number of line to print  :  ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++) 
//     { 
//         int a=65;               //KEY STEP
//         for(int j=1;j<=n-i;j++)    
//         {
//              printf(" ");     
           
//         }
//         for(int k=1;k<=i;k++)  
//         {
//              printf("%c",a);
//              a++;
//         }
        
//          printf("\n");  
//     }
// }