

#include<stdio.h>

int maze(int current_row , int current_column , int destination_row , int destination_column )
{
    int right_ways = 0 ;
    int down_ways = 0 ;
    if(current_row == destination_row && current_column == destination_column) 
        return 1 ;

    if(current_row == destination_row)//only right way call
        right_ways += maze(current_row , current_column + 1 ,destination_row , destination_column);

    if(current_column == destination_column)
        down_ways += maze(current_row + 1 , current_column  ,destination_row , destination_column);        
   
    if(current_row < destination_row && current_column < destination_column)
    {
        right_ways += maze(current_row , current_column + 1 ,destination_row , destination_column);
        down_ways += maze(current_row + 1, current_column , destination_row , destination_column);
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
    int ways = maze(1,1,a,b);
    printf(" number of ways is : %d",ways);
    return 0 ;
}
