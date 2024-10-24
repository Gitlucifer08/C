#include<stdio.h>
#include<stdlib.h>
int main()
{
   //int x = 9 ;
   // int* ptr = &x ; // ex address 0061FF18

   // int* ptr = NULL ; // null is a reserved ( constant )special address .    
   // printf("%p ",ptr);// %u or %p --> to print address .

   int *ptr = (int*) calloc(10,4);
  
   int* p = ptr ;// starting pe set kar diya
   
//    p ++ ;
//    free(ptr);

    ptr ++ ;
    free(p);
}