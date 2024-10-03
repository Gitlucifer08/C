// enter  number of line to print  :  3
// 1234567
// 123 567
// 12   67

#include<stdio.h>
int main ()
{
    int n,no_of_spaces,no_of_stars;
    printf("enter  number of line to print  :  ");
    scanf("%d",&n);
    no_of_spaces =  1 ;
    no_of_stars = n ;

     for(int x = 1 ;x <= 2*n+1 ; x++)
        printf("%d",x);

    printf("\n");
    
    for(int i=1 ; i<=n-1 ; i++)   //n-1 as 1 line is already printed above
    { 
        int a = 1 ;               // IMPORTANT

        for(int j = 1 ; j <= no_of_stars ; j++)   
        {
             printf("%d",a); 
             a++;   
           
        }
        

        for(int k = 1; k<= no_of_spaces ; k++)  
        {
             printf(" ");
              a++ ;                 // CRUCIAL STEP OTHERWISE OUTPUT WILL BE SEE BELOW           
        }
        

        for(int l = 1 ; l <= no_of_stars ; l++)   
        {
             printf("%d",a);
             a++;    
           
        }

        no_of_stars-- ;
        no_of_spaces += 2;
       
         
         printf("\n");  
    }
}

// OUTPUT ->
// IF a++; is ommited from space printing block of for loop
// LIKE THIS :
// enter  number of line to print  :  5
// 1234567891011
// 12345 678910
// 1234   5678
// 123     456
// 12       34