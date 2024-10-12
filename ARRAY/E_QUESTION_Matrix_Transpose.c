//write a programe to print the transpose of the matrix entered by the user .

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
            printf("enter an element at (%d,%d) : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    //display matrix
    printf("original matrix -->\n");
    for(int i=0 ; i<r ; i++)
    {
        
        for(int j=0 ; j<c ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n"); 
    }

    //transpose matrix
    printf("transpose matrix -->\n");
    for(int i=0 ; i<c ; i++)//change r --> c
    {
        
        for(int j=0 ; j<r ; j++)//change c --> r
        {
            printf("%d ",arr[j][i]);//chage here
        }
        printf("\n"); 
    }
  


    return 0 ;
}