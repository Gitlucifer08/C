//INCORRECT ARRAY DECLARATIONS
// int a(25);
// int c = {0,1,2};

//CORRECT ARRAY DECLARATION
// int size = 10 , b[size];

// ARRAY OF INTEGER ::


//EXAMPLE  1 --->

#include<stdio.h> 
int main()
{
   int arr[5] = {10,9,8,7,6};
   for(int i=0 ; i<5 ; i++)
    {
        printf("value at index %d is : %d \n",i,arr[i]);
    }
    return 0 ;
}

//EXAMPLE  2 --->

// #include<stdio.h>
// int main()
// {
//    int arr[5] = {10,9,8,7,6};
//    arr[0] = 100 ;// as index starts from zero so index of 10 is one
//    arr[1] = 200 ;
//    arr[2] = 300 ;
//    arr[3] = 400 ;
//    for(int i=0 ; i<5 ; i++)
//     {
//         printf("value at index %d is : %d \n",i,arr[i]);
//     }
//     return 0 ;
// }

// ERROR :-->

// OUT OF BOUND ERROR WHEN WE TRY TO PRINT VALUE BEYOND ITS LIMIT or index
//but not getting the error right now !!

// #include<stdio.h>
// int main()
// {
//    int arr[5] = {10,9,8,7,6};
//    arr[0] = 100 ;// as inde starts from zero so index of 10 is one
//    arr[1] = 200 ;
//    arr[2] = 300 ;
//    arr[3] = 400 ;
   
    
//         printf(" %d \n",arr[6]);
//         printf(" %d \n",arr[-2]);
//         printf(" %d \n",arr[90]);
    
//     return 0 ;
// }

// ARRAY OF FLOAT ::

// #include<stdio.h>
// int main()
// {
//    float arr[5] = {10.23,9.334,8.5,7.67,6.543};
//    for(int i=0 ; i<5 ; i++)
//     {
//         printf("value at index %d is : %.3f \n",i,arr[i]);
//     }
//     return 0 ;
// }

// ARRAY OF CHARACTER ::

// #include<stdio.h>
// int main()
// {
//    char arr[6] = {'G','o','#','@','p','!'};
//    for(int i=0 ; i<6 ; i++)
//     {
//         printf("value at index %d is : %c \n",i,arr[i]);
//     }
//     return 0 ;
// }