// enter  number of line to print  :  5
// ************
// ***** *****
// ****   ****
// ***     ***
// **       **

#include<stdio.h>
int main ()
{
    int n,no_of_spaces,no_of_stars;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    no_of_spaces =  1 ;
    no_of_stars = n ;

     for(int x = 0 ;x <= 2*n+1 ; x++)
        printf("*");

    printf("\n");
    
    for(int i=1 ; i<=n-1 ; i++) //n-1 as 1 line is already printed above
    { 

        for(int j = 1 ; j <= no_of_stars ; j++)   
        {
             printf("*");    
           
        }
        

        for(int k = 1; k<= no_of_spaces ; k++)  
        {
             printf(" ");
           
        }
        

        for(int l = 1 ; l <= no_of_stars ; l++)   
        {
             printf("*");    
           
        }

        no_of_stars-- ;
        no_of_spaces += 2;
       
         
         printf("\n");  
    }
}
