// create a structure 'person' having attributes as age and weight . access 
// its structure variables using pointers .

#include<stdio.h>
#include<string.h>

typedef struct person // global declaration
    {
        int age ;
        float weight ;
        char name[15] ;
        
    } person ;

    void change(person *x )
    {
        // method 1 : hard to remember to put pointer in brackets then use method 2
        // (*x).age = 80 ; // always put pointer in brackets to prevent error
        // (*x).weight = 100 ;
        // strcpy((*x).name,"billionaire");

        
        // method 2 : (*x).attribute  is equivalent to  x->attribute
        x -> age = 80 ; // space is just for better visibility
        x -> weight = 100 ;
        strcpy(x -> name,"billionaire");

        return ;

    }

    int main()
    {
        // M 1 : boring way
        // person p ;
        // p.age = 30 ;
        // p.weight = 55 ;
        // strcpy(p.name,"ritesh");

        //M 2 : BEST WAY
        person p = {30,55,"ritesh"};// best way as no need of strcpy and order OF STRUCTURE is very important here !! 

        printf("name: %s \n",p.name);
        printf("age : %d \n",p.age);
        printf("weight : %f \n",p.weight);
        
        change(&p);

        printf("name : %s \n",p.name);
        printf("age : %d \n",p.age);
        printf("weight : %f \n",p.weight);
        
        return 0;
    } 