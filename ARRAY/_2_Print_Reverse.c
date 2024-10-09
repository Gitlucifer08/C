#include<stdio.h>
int main()
{
    int n ;  
    printf("please enter size of an array :");//dont define array before getting the value of n in this case else an error
    scanf("%d",&n);
    int arr[n] ; 
     
   for(int i=0 ; i<n ; i++)
    {
        printf("enter value of element %d : ",i+1); 
        scanf("%d",&arr[i]);  // never use anything except format specifier in string of scanf like \n,\t
    }

    printf("reverse -->\n");
    for(int j=n-1 ; j>=0 ; j--)
    {
         printf("%d \n",arr[j]);
    }
    return 0 ;
}
