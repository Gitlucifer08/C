write a program to store roll number and marks obtained by 4 students 
side by side in a matrix .

#include<stdio.h>
int main()
{
    int arr[4][2] = {{1,65},{2,76},{3,98},{4,67}} ;
    // int arr[4][2] = {1,65,2,76,3,98,4,67} ;

      for(int i = 0 ; i<4 ; i++)
    {
        for(int j = 0 ; j<2 ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}