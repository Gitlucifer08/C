// #include<stdio.h>
// int main()
// {
//     //char str[] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h','\0'};
//     // we can also intialise string as
//     char Nstr[] = "hello world this is ritesh\0" ; 
//      for(int i = 0 ; Nstr[i] != '\0' ; i++)
//      {                                    

//          printf("%c",Nstr[i]);
//      }
//     return 0 ;
   
// }

// if we remove \0 from the sring then too the code will work as computer will automatically  add \0 at the end of the string(size increases by 1 byte)
//but it does not work with the {} or old initialization method .

#include<stdio.h>
int main()
{
    //char str[] = {'h','e','l','l','o',' ','w','o','r','l','d',' ','t','h','i','s',' ','i','s',' ','r','i','t','e','s','h','\0'}
    // we can also intialise string as
    char Nstr[] = "hello world this is ritesh" ; // removeing \0  its new  size is 26
     for(int i = 0 ; Nstr[i] != '\0' ; i++)
     {                                    
         printf("%c",Nstr[i]);
     }
     int s = sizeof(Nstr);// int s = sizeof(Nstr[]); is incorrect syntax. You should use sizeof(Nstr) without the brackets, because sizeof works directly on arrays.
     printf("\n size of Nstr = %d",s);//size will be 27 because of \0
    return 0 ;
   
}