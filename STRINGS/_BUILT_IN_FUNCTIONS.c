
#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "hello everyone" ;

    printf("\nlength of string \n");
    // finding length of string
    int x = strlen(string1);// its actuall size is 15 (including \0 but strlen does not count it . it only counts length of visible string .)
    printf("%d \n",x);


    printf("\nstring contents copy \n");
    // copies the contents of string1 to string2
    char string2[15] ;
    strcpy(string2 , string1);// it makes a deep copy
    // can also do this -->
    char r[20];
    strcpy(r,"found better method");// dont exceed the size of r .
    printf("\n\n%s \n\n",r);

    string2[0] = 'K';
    printf("%s \n",string2);// both string1 and string2 are different
    printf("%s \n",string1);

    
    printf("\nconcatination of strings \n");
    //concatination of string1 with string2
    char string3[] = " how are you";// directly concatinate so put one space in string3
    strcat(string1 , string3);
    printf("%s \n",string1); // concatination is done in string1
    printf("%s \n",string3);
    //but this will not work
    // char *s1 = "ritesh";// read only
    // char *s2 = "swami";// read only
    // strcat(s1 , s2);
    // printf("%s \n",s1); // concatination is done in string1
    // printf("%s \n",s2);


    // compare two strings
    char str1[] = "hello";
    char str2[] = "guys"; 
    int a = strcmp(str1 , str2);
    printf(" %d \n",a); // check why 1
   
    
    return 0;
}