

#include<stdio.h>

int maze2(int destination_row , int destination_column)
{
    int right_ways = 0 ;
    int down_ways = 0 ;
    if(destination_row == 1 && destination_column == 1)
        return 1;

    if(destination_row == 1) // cannot go down 
        right_ways += maze2(destination_row , destination_column - 1); 

    if(destination_column == 1)//cannot go right
        down_ways += maze2(destination_row - 1 ,destination_column);

    if(destination_row > 1 && destination_column > 1)
    {
        right_ways += maze2(destination_row , destination_column - 1);
        down_ways += maze2(destination_row - 1 ,destination_column);
    }      

    int total_ways = right_ways + down_ways ;
    return total_ways ;  

}

int main ()
{
    int a,b; 
    printf("enter the number of rows of the maze : ");
    scanf("%d",&a); 
    printf("enter the number of columns of the maze : ");
    scanf("%d",&b);
    int ways = maze2(a,b);
    printf(" number of ways is : %d",ways);
    return 0 ;
}
