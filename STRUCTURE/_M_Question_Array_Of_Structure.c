// Ques: A record contains name of cricketer, his age, number of test matches that
//       he has played and the average runs that he has scored in each test match.
//       Create an array of structure to hold records of 20 such cricketer and
//       then write a program to read these records

#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct cricketer
    {
        char name[20] ;
        int age ;
        int TestMatches ;
        float AvgRuns ;
    } cricketer ;

    cricketer player[2];
    printf("enter details of 20 cricketers :-->\n");
    for(int i = 0 ; i < 20 ; i++ )
    {
        printf("\n\nenter name of %d cricketer : ",i+1);
        scanf(" %[^\n]s",player[i].name); // no need of &
        printf("enter age of %d cricketer : ",i+1);
        scanf(" %d",&player[i].age);
        printf("enter number of test matches played by %d cricketer : ",i+1);
        scanf(" %d",&player[i].TestMatches);
        printf("enter average runs of %d cricketer : ",i+1);
        scanf(" %f",&player[i].AvgRuns);

    }

    printf("\ndetails of all players are : \n");
    for(int i = 0 ; i < 20 ; i++ )
    {
       
        printf("\nname is :%s",player[i].name); 
        printf("\nage is : %d",player[i].age);       
        printf("\ntotal test matches : %d",player[i].TestMatches);      
        printf("\naverage = %.2f",player[i].AvgRuns);
    }

    
    return 0;
}