// basic -->

// #include<stdio.h>
//#include<string.h>
// typedef float real ; // it replaces float by real
//                     // typedef OldName NewName ; 
// int main()
// {
//     real x = 2.343343;
//     printf("%f ",x);
//     return 0;
// }



// actual use -->

#include<stdio.h>
#include<string.h>
int main()
{
    // //rather than
    // struct book{
    //     char name[50] ;
    //     int NoOfPages ;
    //     float Price ; 
    // }  ;
    // struct book a;
    // a.NoOfPages = 298;
    // a.Price = 234 ;

    // struct book b;
    // b.NoOfPages = 837 ;
    // b.Price = 112 ;

    //we can do this
    typedef struct book{
        char name[50] ;
        int NoOfPages ;
        float Price ;
    } Kitab ; // can also write the same name --> book

    Kitab a;
    Kitab b;
    struct book c;
    struct book d ;
    // then can perform any operation like before
    strcpy(a.name,"it works !!");
    printf("%s ",a.name);
    return 0;
}