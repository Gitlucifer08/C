// enter  number of line to print  :  5
// ABCDEFGHIJK
// ABCDE GHIJK
// ABCD   HIJK
// ABC     IJK
// AB       JK

#include<stdio.h>
int main ()
{
    int n,no_of_spaces,no_of_stars;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    no_of_spaces =  1 ;
    no_of_stars = n ;

     for(int x = 1 ;x <= 2*n+1 ; x++)
        printf("%c",x+64);

    printf("\n");
    
    for(int i=1 ; i<=n-1 ; i++)   //n-1 as 1 line is already printed above
    { 
        int a = 65 ;

        for(int j = 1 ; j <= no_of_stars ; j++)   
        {
             printf("%c",a); 
             a++;   
           
        }
        

        for(int k = 1; k<= no_of_spaces ; k++)  
        {
             printf(" ");
             a++;                    // IMPORTANT
           
        }
        

        for(int l = 1 ; l <= no_of_stars ; l++)   
        {
             printf("%c",a);
             a++;    
           
        }

        no_of_stars-- ;
        no_of_spaces += 2;
       
         
         printf("\n");  
    }
}
