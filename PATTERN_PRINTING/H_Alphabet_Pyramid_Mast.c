// enter number of lines : 5
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA

#include<stdio.h>
int main ()
{
    int n , no_of_spaces = 1;
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

        char ch = 'A';
        for(int k = 1 ; k <= i ; k++ )          // Printing increasing sequence of characters
            {
                printf("%c",ch);
                ch++;
            }

        //mathod 1 -->
        // Printing decreasing sequence of characters
        for (int l = i - 1; l >= 1; l--) 
            {
                printf("%c", 64 + l );
            }

        //method 2 -->
        // Printing decreasing sequence of characters
        // for (int l = i - 1; l >= 1; l--) 
        //     {
        //         printf("%c", 'A' + l - 1);
        //     }
        
        printf("\n");
    
    }       
}