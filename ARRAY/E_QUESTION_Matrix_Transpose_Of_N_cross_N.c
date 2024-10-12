// transpose of n*n matrix

#include<stdio.h>
int main()
{
    int n;
    printf("enter number of rows/columns of matrix : ");
    scanf("%d",&n);
   

    int arr[n][n];

    //input matrix elements
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            printf("enter an element at (%d,%d) : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //display matrix
    printf("original matrix -->\n");
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }

    for(int i=0 ; i<n ; i++)
    {
        // important dry run
        for(int j=i ; j<n ; j++)// or for(int j=0 ; j<=i ; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i]  = temp;

        }
        printf("\n"); 
    }
  
    
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }



    return 0 ;
}