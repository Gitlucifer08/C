#include<stdio.h>
int main ()
{
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
    printf("\nthe value of ascii character %c is %d ",ch,(int)ch);
    return 0;
}