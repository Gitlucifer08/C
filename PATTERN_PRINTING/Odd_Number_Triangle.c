// enter a number : 4
//  1 
//  1 3 
//  1 3 5 
//  1 3 5 7 

#include<stdio.h>
int main ()
{
    int n,a;
    printf("enter  number of line to print  : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)  
    { 
        a=1;
        for(int j=1;j<=i;j++)  // main logic 
        {
            printf("%d ",a);
             a +=2;             // need
        }
                        
        printf("\n"); 

    }
}



// caution or new pattern

// enter a number : 4
//  1 
//  3 5 
//  7 9 11 
//  13 15 17 19

// #include<stdio.h>
// int main ()
// {
//     int n,a;
//     printf("enter a number : ");
//     scanf("%d",&n);
//     a=1;
//     for(int i=1;i<=n;i++)  
//     { 
        
//         for(int j=1;j<=i;j++)  // main logic 
//         {
//             printf("%d ",a);
//              a +=2;             // need
//         }
                        
//         printf("\n"); 

//     }
// }