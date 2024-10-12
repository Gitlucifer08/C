// find the sum of given matrix of n * m .

#include<stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows of matrix : ");
    scanf("%d",&r);
    printf("enter number of columns of matrix : ");
    scanf("%d",&c);
    int arr[r][c];
    for(int i=0 ; i<r ; i++)
        {
            for(int j=0 ; j<c ; j++)
            {
                printf("enter element (%d,%d) : ",i,j);
                scanf("%d",&arr[i][j]);
            }
        }
    int sum = 0 ;
    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            sum += arr[i][j] ;
        }
    }
    printf("SUM OF MATRIX IS : %d",sum);
    return 0 ;
}