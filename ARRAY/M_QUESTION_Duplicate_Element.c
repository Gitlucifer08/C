// wap to find duplicate element from a given array of integers 
#include<stdio.h>
int main()
{
    int arr[]={8,3,6,4,9,2,10,5,1,7,7}  ;
    for(int i = 0 ; i<10 ; i ++) 
    {
        for(int j = i + 1 ; j<11 ; j++)//important
        {
            if(arr[i] == arr [j])
            {
                printf("%d is the duplicate element " , arr[i]);
                break ; // it terminates both loops
            }        
        }
    }     
    return 0 ;
}