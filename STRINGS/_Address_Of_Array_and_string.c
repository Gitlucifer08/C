#include<stdio.h>
#include<string.h>
int main()
{
    char str[] = "ritesh swami" ;
    printf("%p \n",&str[0]); //address of any int or character array (string) is always equal
                             // to the address of first element
    printf("%p \n",str);// no need of &    
    return 0 ;
    
}