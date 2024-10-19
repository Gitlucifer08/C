//DECLARATION

// #include<stdio.h>
// int main()
// {
//     int arr[]={'a','$','T','*','P','@'};
//     printf("%c \n",arr[0]);
//     printf("%c \n",arr[1]);
//     printf("%c \n",arr[2]);
//     printf("%c \n",arr[3]);

//     return 0;
// }

//ASCII VALUES

#include<stdio.h>
int main()
{
    char ch = 'a';

    //printf("%d \n",ch); //method 1 using wrong format specifier
    
    int x = (int) ch;  //method 2 using typecasting

    printf("%d \n",ch);
    

    return 0;
}

