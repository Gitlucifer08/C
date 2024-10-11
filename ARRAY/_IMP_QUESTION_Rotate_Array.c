
#include <stdio.h>
#include <limits.h> 

void reverse(int arr[] , int starting_index , int ending_index )
{
    for(int i = starting_index , j = ending_index ;  i < j ; i++ , j --)
   {
    int temp = arr[i] ;
    arr[i] = arr[j] ;
    arr[j] = temp ;
   }
   return ;    

}

int main()
{
    int n , a , b , k ;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
   

    

    int arr [n];
    for (int i = 0; i < n; i++)
     {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
     }

    printf("ENTER NUMBER K TO ROTATE ARRAY BY K STEPS ");
    scanf("%d", &k);
    k = k % n ;

    reverse( arr , 0 , n - 1);
    reverse( arr , 0 , k - 1);
    reverse( arr , k , n - 1);


     for(int i = 0 ; i < n ; i++)
     {
        printf(" \n%d \n",arr[i]);
     }

   
    return 0;
}

