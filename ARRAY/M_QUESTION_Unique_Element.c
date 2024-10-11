#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[7]={1,2,3,4,1,2,3}  ;// we have to print 4(not duplicate)
       
    for(int i = 0 ; i<7 ; i ++) 
    {
        bool flag = false ; // important

        for(int j = i + 1 ; j<7 ; j++)
        {
            if(arr[i] == arr [j])
                flag = true;
               
                       
        }

         if(flag == false)
            {
                  printf("%d is uniqe ", arr[i]);
                  break ; // remove to get multiple unique elements
            }
    }  
     
    return 0 ;
}