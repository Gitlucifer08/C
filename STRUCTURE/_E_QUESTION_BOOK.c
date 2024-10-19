#include<stdio.h>
#include<string.h>
int main()
{
    struct book {
        char name [50];
        float price;
        int NoOfPages;
    } book1 , book2 ;

    book1.NoOfPages = 100 ;
    book1.price = 499.98 ; 

    //book1.name =  "ikigai" ;// can't assign directly it should be assigned at the first place while declaring name[50] .
    //printf("%d \n",book1.name); // won't work

    // book1.name[0] = 'i';
    // book1.name[1] = 'k';
    // book1.name[2] = 'i';
    // book1.name[3] = 'g';
    // book1.name[4] = 'a';
    // book1.name[5] = 'i';
    //  printf("%s \n",book1.name);// this will also print some extra garbage values so not right .

    strcpy(book1.name , "ikigai");// always use struct name before an attribue otherwise an error will occur .
    // ikigai will be copied in name attribute of book1
    printf("\n\nfirst book -->\n");
    printf("%d \n",book1.NoOfPages);
    printf("%f \n",book1.price);
    printf("%s \n",book1.name);

    book2.NoOfPages = 200 ;
    book2.price = 166.8 ; 
    strcpy(book2.name , "friends");
    
    printf("\n\nsecond book -->");
    printf("\n%d \n",book2.NoOfPages);
    printf("%f \n",book2.price);
    printf("%s \n",book2.name);
   

    return 0;
}


// // STRING ERROR ANALYSIS
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     // // this will work
//     // char ch[6] = "hello" ;// size 6 can only assign size equal to 6 or more than 6 to avoid garbage values
//     // printf("%s",ch); // or dont put a size keep ch[] = "hello" ;

//     //this will not work now we have to fill ch index by index
//     char ch[6] ;
//     ch = "hello";
//     printf("%s",ch);

//     return 0 ;
// }


// // STRING ERROR SOLUTION
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char ch[6] ;
//     strcpy(ch,"hello");
//     printf("%s",ch);

//     return 0 ;
// }

