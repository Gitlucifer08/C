//write a function to insert a new character in a string at  a specific position(index) .
// exaple o at index 1 in hello --> hoello

#include<stdio.h>
#include<string.h>
int main()
{
    // assign more size  to the string
    // to shift values from the last so thet we dont lose any character
    char str[10]  =  "hello";
    printf("word is : %s",str);
    printf("\nenter a character to insert :");
    char ch;
    scanf("%c",&ch);
    printf("\nenter index to  insert :");
    int idx;
    scanf("%d",&idx);
    printf("\noriginall string : \n");
    printf("%s \n",str);
    for(int i=4/*highest index*/ ; i >= idx ; i--)
    {
        str[i+1] = str[i];
    }
    str[idx] = ch ;
    printf("\nnew string : \n");
    printf("%s \n",str);

}