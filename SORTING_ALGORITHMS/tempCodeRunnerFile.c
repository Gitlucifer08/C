
// // if method 3 is not used then with method 2 no. of operations are 21
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