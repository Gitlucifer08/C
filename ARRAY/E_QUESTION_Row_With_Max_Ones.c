//given a matrix having 0-1 only , find the row with the maximum number of 1's .
 
 
#include<stdio.h>
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
            printf("enter 0 or 1 at (%d,%d) : ",i,j);
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

    int count , max_idx;
    int max_count = 0 ;
    for(int i=0 ; i<r ; i++)
    {
        count = 0;
        for(int j=0 ; j<c ; j++)
        {
            if(arr[i][j] == 1)
                count++ ;
            if(count>max_count)
            {
                max_count = count ;
                max_idx = i ;//row  index of max 1's


            }    
        }
        
    }
    printf(" max count of 1 is in row : %d \nand its value is : %d",max_count,max_idx);



    return 0 ;
}