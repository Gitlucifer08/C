// write a program to rotate a matrix by 90 degree clockwise. 

// step 1 --> transpose the given matrix 
// step 2 --> reverse each row

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
    printf("original matrix : -->\n");
    printf("original matrix -->\n");
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }

    // transpose
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
    // print transpose
    printf("transpose matrix : -->\n");
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 ; j<n ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }

  
    //rotate matrix  
    for(int i=0 ; i<n ; i++)
    {
        
        for(int j=0 , k = n - 1 ; j<k ; j++ , k--)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k]  = temp;
        }
      
    }
      printf("\n"); 
     
    // rotated matrix
    printf("rotated matrix : -->\n");
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