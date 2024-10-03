// enter the number of rows : 5
//     *
//    ***
//   *****
//    ***
//     *

#include<stdio.h>
int main()
{
    int no_of_spaces,no_of_stars,n;
    printf("enter the number of rows : ");
    scanf("%d",&n);
    no_of_spaces = n/2 ;
    no_of_stars = 1 ;
    int middle_line = n/2 +1;

    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= no_of_spaces ; j++ )
        {
            printf(" ");
        }
       
        for(int k = 1 ; k <= no_of_stars ; k++)
            {
                printf("*");
            }
        if(middle_line > i)
        {
            no_of_spaces-- ;
            no_of_stars += 2 ;
        }
        else
        {
            no_of_spaces++ ;
            no_of_stars -= 2 ;
        }

        printf("\n");
    }
}