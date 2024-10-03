// enter  number of line to print  : 4
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 

#include<stdio.h>
int main()
{
    int n,a;
    printf("enter  number of line to print  : ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)  
    { 
        if( (i%2) != 0)    // start line for one
            a=1;           // start with 1 if i is odd
        else               // start line for zero
            a=0;           // start with zero if i is even
        for(int j=1;j<=i;j++)   
        {
            printf("%d ",a);
            if(a==1) a=0;      // switch between 
            else a=1;          // zero and one
        }
                        
        printf("\n"); 

    }
}


//IMPORTANT NOTE :

// IF SUMMATION OF I AND J IS EVEN 
// if((i+j)%2==0 ==0) pintf("1 ");
//(i+j)%2==0 this part is true so its value is non zero
//hence can't be equal to zero so condition fails and if used in code
// output will be just opposite
//error code ->
 // #include<stdio.h>
// int main()                           
// {
//     int n,a;
//     printf("enter  number of line to print  : ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++)  
//     { 
        
//         for(int j=1;j<=i;j++)   
//         {
//             if((i+j)%2==0 ==0)     // error !!!!!
//                 printf("1 ");
//             else
//                 printf("0 ");

//         }
                        
//         printf("\n"); 

//     }
// }


// ALTERNATE METHOD -->

// analyze the values of i and j carefully
// summation of i and j is always even when 1 is printed and odd in case of zero !!

// enter  number of line to print  : 4
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 


// #include<stdio.h>
// int main()                           
// {
//     int n,a;
//     printf("enter  number of line to print  : ");
//     scanf("%d",&n);
    
//     for(int i=1;i<=n;i++)  
//     { 
        
//         for(int j=1;j<=i;j++)   
//         {
//             if((i+j)%2==0)
//                 printf("1 ");
//             else
//                 printf("0 ");

//         }
                        
//         printf("\n"); 

//     }
// }
