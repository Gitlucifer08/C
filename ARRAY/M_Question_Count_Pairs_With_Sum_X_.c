// find the total number of pairs in the array whose sum is equal 
// to the given value x .

// CASE 1 -->
//when (a,b) and (b,a) are diffrent pairs and (c,c) is also valid

#include<stdio.h>
int main()
{
    int n,x ;  
    printf("please enter size of an array :");
    scanf("%d",&n);

    int arr[n] ; 
    for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]); 
    }
      
    printf("Enter the value of x to find the total pairs  in the array whose sum is equal to x :");

    scanf("%d",&x); 
    int count = 0 ;
     
   for(int i=0 ; i<n ; i++)
    {
        for( int j = 0 ; j<n ; j++ )
        {
            if(arr[i] + arr[j] == x)
            {
                printf("(%d,%d)\n",arr[i],arr[j]); // to print the pair
                count++ ;
            }

        }
    }
    printf("total pairs are : %d",count) ;

    return 0 ;
}

// CASE 2 -->
//when (a,b) and (b,a) are same pairs and (c,c) is not valid

// #include<stdio.h>
// int main()
// {
//     int n,x ;  
//     printf("please enter size of an array :");
//     scanf("%d",&n);

//     int arr[n] ; 
//     for(int i=0 ; i<n ; i++)
//     {
//         printf("enter value of element %d : ",i+1); 
//         scanf("%d",&arr[i]); 
//     }
      
//     printf("Enter the value of x to find the total pairs  in the array whose sum is equal to x :");

//     scanf("%d",&x); 
//     int count = 0 ;
     
//    for(int i=0 ; i<n ; i++)
//     {
//         for( int j = i+1 /* main step*/ ; j<n ; j++ ) //CHECK VALUES GREATES THAN I ONLY
//         {
//             if(arr[i] + arr[j] == x)
//                 {
//                     printf("(%d,%d)\n",arr[i],arr[j]); // to print the pair
//                     count++ ;
//                 }

//         }
//     }
//     printf("total pairs are : %d",count) ;

//     return 0 ;
// }