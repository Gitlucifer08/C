// FIND OUT THE MAXIMUM AND MINIMUM ELEMENT OF N * M MATRIX IN A 2D ARRAY & THE INDEX OF  MAXIMUM AND MINIMUM ELEMENTS .

#include<stdio.h>
int main()
{
    int r,c;
    printf("enter number of rows of matrix : ");
    scanf("%d",&r);
    printf("enter number of columns of matrix : ");
    scanf("%d",&c);
    int arr[r][c];

    // input the matrix
    for(int i=0 ; i<r ; i++)
    {
        
        for(int j=0 ; j<c ; j++)
        {
            printf("enter element (%d,%d) : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    int max = arr[0][0] ;
    int min = arr[0][0] ;
    int a,b,x,y;
    a = b = x = y = 0 ;

    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            if(arr[i][j] > max)
            {
                max = arr[i][j];
                a = i ;
                b = j ;
            }

            if(arr[i][j] < min)
            {
                min = arr[i][j];  
                x = i ;
                y = j ;
            }
        }
    }
    printf("\n maximum element of given matrix is : %d at index (%d,%d)",max,a,b);
    printf("\n minimum element of given matrix is : %d at index (%d,%d)",min,x,y);
    return 0 ;
}