#include<stdio.h>
typedef int* pointer ;
int main()
{
    int x = 5 , y = 9 ; // can we also initialize two pointers like this ?
    // int *p1 = &x ;
    // int *p2 = &y ;

    // int *p1 , p2 ; //no ! this means that int *p1 (pointer) and int p2 (integer) .

    // int *p1 = &x ,p2 = &y ; // it will also generate error

    //this can be solved by typedef .
    pointer p1 = &x ,p2 = &y ;

    printf("%p \n",p1);
    printf("%p \n",p2);
    return 0;
}