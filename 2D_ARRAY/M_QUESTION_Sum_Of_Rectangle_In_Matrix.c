// given a matrix 'arr' of dimension n * m and 2 coordinates (l1,r1) and (l2,r2) .
// return the sum of the rectangle  formed by the given coordinates (l1,r1) and (l2,r2)
// in the matrix 'arr'.

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

    for(int i=0 ; i<r ; i++)
    {
        
        for(int j=0 ; j<c ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int l1,r1,l2,r2;
    printf("enter the value of (l1,r1) : ");
    scanf("%d %d",&l1,&r1);
    printf("enter the value of (l2,r2) : ");
    scanf("%d %d",&l2,&r2);

      

    int sum = 0 ;
    for(int i = l1 ; i<=l2 ; i++)
    {
        for(int j = r1 ; j<=r2 ; j++)
        {
            sum += arr[i][j] ;
        }
    }
    printf("SUM OF NEW MATRIX IS : %d",sum);
    return 0 ;
}