// enter  number  :  4
// 1111111
// 1222221
// 1233321
// 1234321
// 1233321
// 1222221
// 1111111

#include<stdio.h>
int main ()
{
    int n,no_of_spaces,no_of_stars;
    printf("enter  number :  ");
    scanf("%d",&n);
    int min = 0;
    for(int i = 1 ; i <= 2*n-1 ;i++ )
    {
        for(int j=1 ; j<=2*n-1 ;j++)
        {
            int a=i;
            if(i>n) a = 2*n-i;
            int b = j;
            if(b>n)  b = 2*n-j;
            if(a<b)  min = a;
            else min = b;
            printf("%d",min);
        }
        printf("\n");
    }
    return 0;
}

// PATTERN 2-->

// enter  number :  4
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

// #include<stdio.h>
// int main ()
// {
//     int n,no_of_spaces,no_of_stars;
//     printf("enter  number :  ");
//     scanf("%d",&n);
//     int min = 0;
//     for(int i = 1 ; i <= 2*n-1 ;i++ )
//     {
//         for(int j=1 ; j<=2*n-1 ;j++)
//         {
//             int a=i;
//             if(i>n) a = 2*n-i;
//             int b = j;
//             if(b>n)  b = 2*n-j;
//             if(a<b)  min = a;
//             else min = b;
//             printf("%d", n + 1 - min);
//         }
//         printf("\n");
//     }
//     return 0;
// }