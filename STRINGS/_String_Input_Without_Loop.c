//METHOD 1 -->
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     for(int i = 0 ; i < 50 ; i++)
//     {
//         scanf("%c",&str[i]);
//     }
//     printf("%s",str);
//     return 0 ;    
// }

//METHOD 2 -->
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
    
//     scanf("%s",str); // no need of [] and &
//     // but it will only input the first word 
//     printf("your input is : %s",str);
//     return 0 ;    
// }

//METHOD 3 -->
#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    scanf("%[^\n]s",str); // this overcomes problem of method 2
    printf("your input is : %s",str);
    return 0 ;    
}

//METHOD 4 -->
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     gets(str); // no need of & and []
//     printf("your input is : %s",str);
//     return 0 ;    
// }

//METHOD 5 -->
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str[50];
//     gets(str);
//     puts(str);
//     return 0 ;    
// }