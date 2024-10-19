
#include<stdio.h>
#include<string.h>

typedef struct pokemon // global declaration
    {
        int hp ;
        int speed ;
        int attack ;
        char tier ;
        char name[20];
    } pokemon ;

int main()
{
   pokemon pikachu;

   pikachu.attack = 70 ;
   pikachu.hp = 60 ;
   strcpy(pikachu.name,"pika"); 
   pikachu.speed = 100 ;
   pikachu.tier = 'A' ;
   // int *x --> address of integer value
   pokemon *x = &pikachu;
   
    printf("%p \n",&pikachu.hp);
    printf("%p \n",&pikachu.attack);
    printf("%p \n",&pikachu.speed);
    printf("%p \n",&pikachu.tier);
    printf("%p \n",&pikachu.name);

    printf("%p \n",x);// this address in itself contains various address of diffrent data type yet like array it store address of very first data type rest are in continous memory ,so can be calculated .
    //example output (address in sequence of declration)

    // 0061FEF8 //hp
    // 0061FEFC //attack (hp + 4)
    // 0061FF00 
    // 0061FF04 
    // 0061FF05 
    // 0061FEF8 

   return 0;
}