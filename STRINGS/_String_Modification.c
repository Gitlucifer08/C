#include<stdio.h>
int main()
{
    char str[]="hello guys";
    // str[1]='a';
    // str[2]='t';
    // str[3]='t';
    str[1]=98;
    str[2]=99;
    str[3]=100;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        printf("%c",str[i]);
    }
    return 0;

}