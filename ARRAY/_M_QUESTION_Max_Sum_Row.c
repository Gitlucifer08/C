// write a program to print the row number having the maximum
// sum in a given matrix and also print the maximum sum .


#include<stdio.h>
#include<limits.h>
int main()
{
    int r,c;
    printf("enter number of rows of matrix : ");
    scanf("%d",&r);
    printf("enter number of columns of matrix : ");
    scanf("%d",&c);

    int arr[r][c];

    //input matrix elements
    for(int i=0 ; i<r ; i++)
    {
        
        for(int j=0 ; j<c ; j++)
        {
            printf("enter element (%d,%d) : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //display matrix
    for(int i=0 ; i<r ; i++)
    {
        
        for(int j=0 ; j<c ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int max_sum = INT_MIN;//Initialize to the smallest possible value
    int max_row = -1;    //Initialization to -1 is just a precautionary measure to indicate that no row has been processed yet. 
                     //After processing, it will hold the correct row index with the maximum sum .
    
    // Calculate row-wise sum and track the row with maximum sum
    for(int i=0 ; i<r ; i++) 
    {
        int sum = 0 ;           // sets the value of sum 0 in each row
        for(int j=0 ; j<c ; j++)
        {
           sum += arr[i][j];
        }
           
        // Update maximum sum and corresponding row number
        if(sum > max_sum)
        {
            max_sum = sum ;
            max_row = i ;
        }
    }
    
       // Output the result
    printf("Row with the maximum sum is: %d\n", max_row);
    printf("Maximum sum is: %d\n", max_sum);
      

    return 0 ;
}