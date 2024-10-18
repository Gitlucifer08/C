// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1 [] = "ritesh swami";
//     // char *str2 = str1 ;// HERE STR2 IS A SHALLOW COPY
//     // str1 [0] ='g';
//     // printf("%s ",str2);

//     char str2 [] = "ritesh swami"; // here str2 is a deep copy
//     str2[0] = 'G';                  
//     printf("%s \n",str1);
//     printf("%s \n",str2); // both str1 and str2 are diffrent strings

//     printf("%p \n",str1);
//     printf("%p ",str2);


//     return 0 ;
// } 

//point 1

// we can't directly copy whole string str1 to str2 , only individual characters
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1 [] = "ritesh swami";
//     //char str2 [] = str1; //error: invalid initializer

//     // char str2[12]; // error: assignment to expression with array type
//     // str2 = str1 ;

//     str2[0] = 'G';                  
//     printf("%s \n",str1);
//     printf("%s \n",str2);

//     printf("%p \n",str1);
//     printf("%p ",str2);


//     return 0 ;
// } 

// point 2

// we can directly copy the whole string using pointers but not individual characters
#include<stdio.h>
#include<string.h>
int main()
{
    char *str1 = "ritesh swami";
    char *str2 ;
    str2 = str1 ;

    str2 = "arya college";

    printf("%s \n",str1);
    printf("%s \n",str2);

    printf("%p \n",str1);
    printf("%p ",str2);


    return 0 ;
}

