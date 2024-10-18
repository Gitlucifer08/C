// ARRAY INITIALIZATION
// #include<stdio.h>
// int main( )
// {
//     int arr[2][2] = { {1,2} , {3,4} };//method 1 -->

//     // int arr[2][2];   //method 2 -->
//     // arr[0][0] = 1 ;
//     // arr[0][1] = 2 ;
//     // arr[1][0] = 3 ;
//     // arr[1][1] = 4 ;
//     // //1 2
//     // //3 4

// // array printing

//     for(int i = 0 ; i<2 ; i++)
//     {
//         for(int j = 0 ; j<2 ; j++)
//         {
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
// }

//ARRAY INPUT

#include<stdio.h>
int main( )
{
    int r , c ;
   
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
     int arr[r][c]; // always comes after input // total elements  = r*c


    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            printf("Enter element at position [%d][%d] : ",i,j);
            scanf(" %d",&arr[i][j]);
        }
       
    }
      printf("\n");
  

    for(int i = 0 ; i<r ; i++)
    {
        for(int j = 0 ; j<c ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}
