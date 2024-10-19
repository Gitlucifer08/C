// Question : create an structure 'date' that contains three members namely
//            date , month and year . create 2 structure variables with different
//            dates and now compare the two . if the dates are equal then display
//            message as "equal" otherwise "unequal" .

#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct date
    {
        int date ; // we can use the name of structure as attribute .
        int month ;
        int year ;

    } date ;
    date a , b ;

    //a.date = 08 ; //numbers starting with 0 in C are interpreted as octal (base-8) numbers. In octal, valid digits are only 0-7, and 08 is not a valid octal number, which is why you are seeing the error.
    a.date = 8 ;
    a.month = 7 ;
    a.year = 2003 ;

    b.date = 18 ;
    b.month = 10 ;
    b.year = 2024 ;

    //  if(a==b)  // we cant compare two user defined structures directly we have to do this attribute by attribute
    //     printf("equal");

    // Compare the two dates attribute by attribute
    if(a.date == b.date && a.month == b.month && a.year == b.year)
        printf("EQUAL \n");

    else
        printf("UNEQUAL \n");

    return 0 ;
}