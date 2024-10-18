// METHOD 1 -->
// #include<stdio.h>
// #include<string.h>// necessary to use %s , puts , calls
// int main()
// {
//     char str[] = "c language is best";
//     printf("%s",str); // %s is string format specifier and don't put [] that will generate an error
//     return 0 ;
// }

// METHOD 2 -->
// #include<stdio.h>
// #include<string.h>// necessary to use %s , puts , calls
// int main()
// {
//     char str[] = "c language is best";
//     //printf("%s",str); // %s is string format specifier and don't put [] that will generate an error
//     puts(str); // only used to print string
//     return 0 ;
// }

// METHOD 3 -->
#include<stdio.h>
#include<string.h>// necessary to use %s , puts , calls
int main()
{
    char str[] = "c language is best";
    puts("hello everyone str");
    return 0 ;
}
