// enter number of rows : 5
// enter  number of columns : 8
// A B C D E F G H 
// A B C D E F G H 
// A B C D E F G H 
// A B C D E F G H 
// A B C D E F G H 
#include<stdio.h>
int main ()
{
    int n,m;
    printf("enter number of rows : ");
    scanf("%d",&n);
    printf("enter  number of columns : ");
    scanf("%d",&m);
    
    for(int i=1;i<=n;i++)  
    { 
        int a=1;
        for(int j=1;j<=m ;j++) 
        {
            printf("%c ",a+64);    // main logic 
            a++;               
        }
                        
        printf("\n"); 

    }
}


// or like this

// #include<stdio.h>
// int main ()
// {
//     int n,m;
//     printf("enter number of rows : ");
//     scanf("%d",&n);
//     printf("enter  number of columns : ");
//     scanf("%d",&m);
    
//     for(int i=1;i<=n;i++)  
//     { 
//         int a=1;
//         for(int j=1;j<=m ;j++) 
//         {
//             int d= a+64;           // d=65
//             char ch =(char)d;      // ch = (char)65 -> ch = 'A'
//             printf("%c ",d);       // main logic 
//             a++;               
//         }
                        
//         printf("\n"); 

//     }
// }