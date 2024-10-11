#include<stdio.h>
#include<stdbool.h> // necessary to add in order use  bool data type

int main()
{
    int n , x;
    printf("Please enter the size of the array: ");
    scanf("%d", &n);
    int arr [n];
    for (int i = 0; i < n; i++)
     {
        printf("Enter the value of element %d: ", i + 1);
        scanf("%d", &arr[i]);
     }

    printf("Enter the element to search : ");
    scanf("%d", &x);
    
    bool flag = false ;   // bool is a data type that can only store too values true and false
    int idx = 0 ;

    for(int i = 0 ; i < n; i++)
    {
        if (arr[i] == x)
        {   flag = true ; // use break; if only first element is to search
            idx = i ;
            break ;
        }             // true means present
    }
     
    if(flag == false)
         printf("%d is not present in the array \n",x);
    
    else
        printf("%d is present in the array at %d index \n",x, idx);


    // for(int i = 0 ; i < 10 ; i++)
    // {
    //     if (arr[i] == x)
    //     {
    //     printf("\nelement %d is present at %d index \n",x,i);// use break; if only first element is to search
    //     }
    // }
   
    return 0;
}