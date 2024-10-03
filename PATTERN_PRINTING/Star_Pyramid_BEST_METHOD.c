
// enter  number of line to print  :  4
//    *
//   ***
//  *****
// *******

#include<stdio.h>
int main ()
{
    int n,no_of_spaces,no_of_stars;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    no_of_spaces = n - 1 ;
    no_of_stars = 1 ;

    for(int i=1;i<=n;i++) 
    { 
        for(int j = 1 ; j <= no_of_spaces ; j++)   
        {
             printf(" ");    
           
        }
        for(int k = 1; k<=no_of_stars ; k++)  
        {
             printf("*");
           
        }
        
         if(i<n)         // there is no need of if just the inside statements are needed                         
         {
          no_of_spaces-- ;
          no_of_stars += 2;
         }
         
         printf("\n");  
    }
}
