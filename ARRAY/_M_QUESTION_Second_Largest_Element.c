

#include<stdio.h>
#include<limitS.h>
int main()
{
    int n ;  
    printf("please enter size of an array :");
    scanf("%d",&n);

    int arr[n] ; 
    for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]); 
    }
    int max = INT_MIN ; //LOWEST NUMBER
    int smax = INT_MIN ;  
    printf("%d",INT_MIN);

   for(int i = 0 ; i < n ; i++ ) 
   { 
       if(max < arr[i])
       max = arr[i];
   }

    for(int i = 0 ; i < n ; i++ ) 
   { 
       if(arr[i] != max && smax < arr[i])
       smax = arr[i];
   }

   
    printf("second largest element: %d",smax) ;

    return 0 ;
}



// #include<stdio.h>
// int main()
// {
//     int n ;  
//     printf("please enter size of an array :");
//     scanf("%d",&n);

//     int arr[n] ; 
//     for(int i=0 ; i<n ; i++)
//     {
//         printf("enter value of element %d : ",i+1); 
//         scanf("%d",&arr[i]); 
//     }
//     int max = arr[0] ;
//     int smax = arr[1] ;  

//    for(int k = 0 ; k < n ; k++ ) 
//    { 
//         if(max < arr[k]) max = arr[k] ;

//         if(smax < arr[k] && arr[k] != max) // do not initialise smax = max = arr[0]
//          {                                 // that will  make it always print max element
//              smax = arr[k] ;                                // due to the end condition     
           
//          }
//    }

   
//     printf("second largest element: %d",smax) ;

//     return 0 ;
// }