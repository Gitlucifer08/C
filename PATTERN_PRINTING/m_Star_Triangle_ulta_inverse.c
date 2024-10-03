// enter  number of line to print  :  5
//   *****
//    ****
//     ***
//      **
//       *

#include<stdio.h>
int main ()
{
    int n,no_of_spaces,no_of_stars;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    no_of_spaces = 0 ;
    no_of_stars = n ;

    for(int i=1;i<=n;i++) 
    { 
        for(int j = 1 ; j <= no_of_spaces ; j++)   
        {
             printf(" ");    
           
        }
        no_of_spaces++ ;
        for(int k = 1; k<=no_of_stars ; k++)  
        {
             printf("*");
           
        }
        no_of_stars-- ;
            
        printf("\n");  
    }
}
