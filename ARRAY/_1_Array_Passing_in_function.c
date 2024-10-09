// The array in C are passed to functions by call by reference
#include<stdio.h>
void fun( int x[] )
{
    x[0] = 99 ;
    return ;    
}

int main()
{
    int arr[5] = {5,6,7,8,9};
    printf("%d \n",arr[0]);
    fun(arr);
    printf("%d \n",arr[0]);
    return 0 ;
}