// #include<stdio.h>
// int main()
// {
//     char str[11/* number of spaces in string*/] = {'h','e','l','l','o',' ','w','o','r','l','d'};
//     for(int i = 0 ; i < 11 ; i++)
//     {
//         printf("%c",str[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int main()
// {
//     char str[11/* number of spaces in string*/] = {'h','e','l','l','o',' ','w','o','r','l','d'};
//     char ch = '\0';  // initialize ch to null character
//     int x = 0;
//     char a = (char) x ;  // convert x to char

//     printf("value of null character=%c**\n",a);//it will never be printed but stll occupy space .
//     int y = sizeof(ch);
//     printf("size of null character = %d",y);
//     return 0;
// }

//string printing without using its size

// #include<stdio.h>
// int main()
// {
//     char str[] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h','\0'};
//     for(int i = 0 ; str[i] != '\0' ; i++)//insted of \0 we can use any other symbol( ex. @,$,%)but there is  a chance that they are already used in the string .
//      {                                   // as when the condition became false that symbol used  in the string will not be printed and anything after it

//          printf("%c",str[i]);
//      }

//     // char str[] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h','*'};
//     // for(int i = 0 ; str[i] != '*' ; i++)//insted of \0 we can use any other symbol( ex. @,$,%)but there is  a chance that they are already used in the string .
//     //  {
//     //      printf("%c",str[i]);
//     //  }
    
    

//     return 0;
// }

//M-1
// #include<stdio.h>
// int main()
// {
//     char str[50] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h'};//size is 26 + 1
//     for(int i = 0 ; str[i] != '\0' ; i++) //The array str was declared with a size of 50, but you need to explicitly terminate the string with a null character ('\0') to make it a valid C string
//     {

//          printf("%c",str[i]);
//      }
    

//     return 0;
// }
//M-2

#include<stdio.h>
int main()
{
    // char str[20/*ERROR --> warning: excess elements in array initializer*/] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h'};//size is 26 + 1
    char str[26] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h'};
    for(int i = 0 ; str[i] != '\0' ; i++) // the array str does not have a null terminator ('\0'), so the loop will not know where to stop and could print garbage values or result in unexpected behavior. Strings in C must be null-terminated, meaning you need to explicitly add the null character '\0' at the end of the string.
    {

         printf("%c",str[i]);
     }
    

    return 0;
}

