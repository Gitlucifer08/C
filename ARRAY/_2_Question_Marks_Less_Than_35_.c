//given an array of marks of students , if the mark of any student is 
//less than 35 print its roll number . [ roll number here refers to the index of the array .] 

#include<stdio.h>
int main()
{
    int marks[100];
    int n; 
    printf("please enter number of  students whose number you want to input :");
    scanf("%d",&n);
   
   for(int i=0 ; i<n ; i++)
    {
        printf("enter marks of student %d : ",i+1); 
        scanf("%d",&marks[i]);  // never use anything except format specifier in string of scanf like \n,\t
    }
   
   printf("roll number of students who scored less than 35 marks :\n"); 
    for(int i = 0 ; i < n ; i++)
    {
        if(marks[i] < 35)
         printf("%d \n",i);
    }
    return 0 ;
}
