#include<stdio.h>
int main()
{
    // FILE* ptr = fopen("test.txt","r");
    // char str[100];
    // while(fgets(str,100,ptr) != NULL )
    //     printf("%s",str);

    // creating a file
    FILE* ptr = fopen("rit.txt","w");

    // writing to a file
    char str[] = " placement !!!!" ;
    fputs(str,ptr);
    fclose(ptr);
    
}