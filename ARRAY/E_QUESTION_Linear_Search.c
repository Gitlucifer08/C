// given an array containing 1 to n  integers, find the missing one 
#include<stdio.h>
int main()
{
    int n , x;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
    int arr [n];
    int sum1 = 0,sum2 = 0 ;

    for (int i = 0; i < n; i++)
    {
            arr[i] = i + 1 ;
    }

    for (int i = 0; i < n; i++)// total sum
    {
        sum1 +=  arr[i] ;
    }

    printf("Enter the index of element to be removed from the array: ",x);
    scanf("%d", &x);
    arr[x] = 0 ;

    
   
    for (int i = 0; i < n; i++)// sum after removal
     {
        sum2 +=  arr[i] ;
     }
     printf("the missing number is %d", sum1-sum2);
     return 0 ;
}