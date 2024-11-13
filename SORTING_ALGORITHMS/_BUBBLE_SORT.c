// TIME COMPLEXITY OF BUBBLE SORT IS O(n^2) in worst




// METHOD 1 --> (UNOPTIMIZED)

// here the inner loop will always run n-1 times and there is no relation between i and j .

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {5,4,3,2,1} ;
//     int n = 5 ;// size of array

//     // original array print
//     for(int i = 0 ; i < n ;i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     // ( bubble sort )
//     for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
//     {
//         for(int j = 0 ; j < n - 1 ; j++ )// as we are using j+1 so we will reach upto n so don't worry about n-1 .
//         {
//            if(arr[j] > arr[j+1])
//            {
//             int temp = arr[j];
//             arr[j] = arr[j+1] ;
//             arr[j+1] = temp ;
//            } 
//         }

//     }

//     // SORTED ARRAY
//     printf("\n");
//     for(int i = 0 ; i < n ;i++)
//     {
//         printf("%d ",arr[i]);
//     }

// }




// // METHOD 2 --> ( OPTIMIZED )
// // in the inner loop reducing 1 (i) after each pass (ex 0,1,2,3 ......)

// #include<stdio.h>
// int main()
// {
//     int arr[5] = {5,4,3,2,1} ;
//     int n = 5 ;// size of array

//     // original array print
//     for(int i = 0 ; i < n ;i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     // ( bubble sort )
//     for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
//     {
//         for(int j = 0 ; j < n - 1 - i ; j++ ) // as after every pass we do not check the last (largest) element sorted after each pass .
//         {
//            if(arr[j] > arr[j+1])
//            {
//             int temp = arr[j];
//             arr[j] = arr[j+1] ;
//             arr[j+1] = temp ;
//            } 
//         }
//     }

//     // SORTED ARRAY
//     printf("\n");
//     for(int i = 0 ; i < n ;i++)
//     {
//         printf("%d ",arr[i]);
//     }
// }




// METHOD 3 --> ( MOST OPTIMIZED )

// in the inner loop reducing 1 (i) after each pass (ex 0,1,2,3 ......) and 
// check before every pass is array sorted ( helpful for nearly sorted or half sorted array ) .

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {9,1,3,4,10,5,6} ;
    int n = 7 ;// size of array

    // original array print
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }

    // ( bubble sort )
    int count = 0;
    for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
    {
        // checkmark
        bool flag = true ; // true means array is sorted
        for(int j = 0 ; j < n - 1 - i ; j++ ) 
        {
            count ++ ;
           if(arr[j] > arr[j+1])
           {
            int temp = arr[j];
            arr[j] = arr[j+1] ;
            arr[j+1] = temp ;
            flag = false ; // if swapping is done than array is not sorted so change flag to false
           } 
        }
        if( flag == true)
            break ;

    }

    // SORTED ARRAY
    
    printf("\number of operation is : %d",count);
    printf("\n");
    for(int i = 0 ; i < n ;i++)
    {
        printf("%d ",arr[i]);
    }


}



// // if method 3 is not used then with method 2 no. of operations are 21 and with method 3 operations are 15 .
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int arr[] = {9,1,3,4,10,5,6} ;
//     int n = 7 ;// size of array

//     // original array print
//     for(int i = 0 ; i < n ;i++)
//     {
//         printf("%d ",arr[i]);
//     }

//     // ( bubble sort )
//     int count = 0;
//     for(int i = 0 ; i < n - 1 ; i++) // maximum passes for n elements will be " n - 1 " .
//     {
//         // checkmark
//        // bool flag = true ; // true means array is sorted
//         for(int j = 0 ; j < n - 1 - i ; j++ ) 
//         {
//             count ++ ;
//            if(arr[j] > arr[j+1])
//            {
//             int temp = arr[j];
//             arr[j] = arr[j+1] ;
//             arr[j+1] = temp ;
//             //flag = false ;
//            } 
//         }
//         //if( flag == true)
//         //    break ;

//     }

//     // SORTED ARRAY
    
//     printf("\number of operation is : %d",count);
//     printf("\n");
//     for(int i = 0 ; i < n ;i++)
//     {
//         printf("%d ",arr[i]);
//     }


// }