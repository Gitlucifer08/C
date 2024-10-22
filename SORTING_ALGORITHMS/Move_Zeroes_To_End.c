//Question: Given an integer array arr, move all O's to the end of it while 
//          maintaining the relative order of the non-zero elements.



// METHOD 1 --> ( TIME COMPLEXITY = O(n) and SPACE COMPLEXITY = O(n) )

// #include<stdio.h>
// int main()
// {
//     int arr[9] = {5,0,2,0,0,4,1,0,3};
//     int brr[9] ;// int brr[9] = {0}; without assigning its elements to zero they will hold garbage values.   
//     int n = 9 ; // size of array 
//     int idx = 0 ; 
//     for(int i = 0 ; i<n ; i++)
//     {
//         if(arr[i] != 0)
//         {
//             brr[idx] = arr[i] ;
//             idx++ ; // this make sure that idx increases when arr[i] is not equal to zero so the order of non zero elements will be continous.
//         }
        
//     }

//     while( idx != 9)
//     {
//         brr[idx] = 0;
//         idx ++ ;
//     }

//     printf("new array is : ") ;
//     for(int i = 0; i<n ; i++)
//         printf("%d ",brr[i]);
    
//     return 0;
// }



// METHOD 1 --> ( TIME COMPLEXITY = O(n) and SPACE COMPLEXITY = O(n) )
// bubble sort algo lagayenge


#include<stdio.h>
int main()
{
    int arr[9] = {5,0,2,0,0,4,1,0,3};
    int n = 9 ; // size of array 
   
    for (int i = 0 ; i < n - 1 ; i++) // n-1 passes
    {
        for (int j = 0 ; j < n - 1 - i ; j++)
        {
            if(arr[j] == 0)
            {
                //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    

    printf("new array is : ") ;
    for(int i = 0; i<n ; i++)
        printf("%d ",arr[i]);
    
    return 0;
}