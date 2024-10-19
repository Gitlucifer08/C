// QUESTION : Given an array of integers with 1 to n elements and the size of the array is n + 1 .
//            one element is ocurring more than once ( duplicate element is present ) . find the
//            duplicate element .


// // METHOD 1 ( NOT EFFICIENT IN TERMS OF TIME ) --> 
// // AS NUMBER OF OPERATIONS ARE VERY LARGE
// #include<stdio.h>
// int main()
// {
//     int arr[]={8,3,6,4,9,2,10,5,1,7,7}  ;
//     int count = 0;
//     for(int i = 0 ; i<10 ; i ++) 
//     {
//         for(int j = i + 1 ; j<11 ; j++)//important
//         {
//             count++;    
//             if(arr[i] == arr [j])
//             {
//                 printf("%d is the duplicate element " , arr[i]);
//                 printf("\ntotal operations :%d",count);
//                 break ; // it terminates both loops
//             }        
//         }
//     }     
//     return 0 ;
// }




// // METHOD 2 ( NOT EFFICIENT IN TERMS OF SPACE ) -->
// // AS AN EXTRA ARRAY OF EQUAL OR MORE SIZE IS FORMED THAT OCCUPY SPACE
// #include<stdio.h>
// int main()
// {
//     int arr[]={8,3,6,4,9,2,10,5,1,7,7} ;
//     int brr[11]={0} ; // all elements are zero (visited array) SIZE OF BOTH SHOULD BE SAME (or BRR CAN BE OF LARGER SIZE) .
//     int count = 0 ;
//     for (int i = 0; i < 11; i++) 
//     {
//         count ++ ;
//         if (brr[arr[i]] == 0) // Check if the element has been visited
//             brr[arr[i]] = 1;  // Mark element as visited
       
//         else
//         {
//             printf("Duplicate element is: %d\n", arr[i]);
//             printf("number of operations : %d",count) ;

//         }

//     }     

//     return 0 ;
// }




// METHOD 3 ( MOST EFFICIENT ) -->
#include<stdio.h>
int main()
{
    int arr[]={8,3,6,4,9,2,10,5,1,7,7}  ; //here n is 10
    int sum = 0;    

    //sum of 1 to n integers
    // n*(n+1)/2
    int i_sum = 10*11/2 ; 
    for (int i = 0; i < 11 ; i++)
    {
        sum += arr[i] ;
    }

    int d_number = sum - i_sum ;
    printf("Duplicate element is: %d\n", d_number) ;
    
    return 0 ;
}