// enter number of lines : 5
//     1
//    121
//   12321
//  1234321
// 123454321




#include<stdio.h>
int main ()
{
    int n , num = 1 , no_of_spaces = 1,rev;
    printf("enter number of lines : ");
    scanf("%d",&n);
    no_of_spaces  = n - 1 ;

    for (int i = 1 ; i <= n ; i++)
    {
        
        for(int j =1 ; j <= no_of_spaces ; j++ ) // loop for spaces
        {
            printf(" ");
        }
        no_of_spaces-- ;

        for(int k = 1 ; k <= num ; k++ )       // loop for number triangle
        {
            printf("%d",k);
        }
        num++;

        int a = i - 1;
         for(int l = 1 ; l <= i-1 ; l++ )    // extra
        {
            printf("%d",a);
            a--;
        }

        printf("\n");
    
    }       
}