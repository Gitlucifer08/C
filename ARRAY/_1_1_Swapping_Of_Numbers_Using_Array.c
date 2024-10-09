// The array in C are passed to functions by call by reference
#include<stdio.h>
void fun( int x[] )        // NO NEED TO SPECIFY  THE SIZE OF THE ARRAY AS void fun( int x[2] )
{
    int temp = x[0] ;
    x[0] = x[1] ;
    x[1] = temp ;
    return ;    
}

int main()
{
    int arr[2] = {5,6};
    printf("%d %d\n",arr[0],arr[1]);
    fun(arr);                 // DON'T PASS ARRAY AS  fun(arr[]); --> no need of its sign 
    printf("%d %d\n",arr[0],arr[1]);
    return 0 ;
}