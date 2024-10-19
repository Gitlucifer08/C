// QUESTION : Given an array of integer numbers that is already sorted in non-decreasing order ,
//            find two numbers such that they add up to a specific target number .

#include<stdio.h>
int main()
{
    int target = 8 ;
    int arr[] = {1,2,4,4,5,6,8,9,10,11,12,14};// order should be non-decreasing
    int n = 12 ; // size of array
    
    //for(int i = 0 , int j = n-1; i < j ; )//error
    // you can't declare two variables like int i = 0 , int j = n-1; in one statement. 
    //You should either separate the variable declarations or declare them beforehand.
    // only one can be declared inside

    // // METHOD 1 -->
    // int i = 0 , j = n - 1 ;
    // for( ; i < j ; )

    // // METHOD 2 -->
    for(int i = 0 , j = n-1; i < j ; )// just remove the int of j as in c after the first int no need to use it again (example : int a , b) . 
    {                                 // instead of for loop we can also use while loop here .
        if(arr[i] + arr[j] == target)
        {
            printf(" the two numbers whose sum is %d are : %d and %d \n",target,arr[i],arr[j]);

            break ; // use when only first (one) pair is needed

            // // if more than one pairs are present
            // i++;  // move forward to find any other pairs
            // j--;  // move backward to continue searching
        }

        else if( arr[i] + arr[j] > target )
            j -- ;    // to decrease the sum

        else if( arr[i] + arr[j] < target)
            i ++ ;    // to increase the sum
    }   

    return 0 ;
}