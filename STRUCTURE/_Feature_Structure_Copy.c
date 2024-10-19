#include<stdio.h>
#include<string.h>
int main()
{
     typedef struct pokemon
    {
        int hp ;
        int speed ;
        int attack ;
        char tier ;
        char name[20];
    } pokemon ;

    pokemon a,b,c;

    //a.name = "blastoise"; // WRONG !!
    strcpy(a.name,"blastoise");
    a.hp = 70 ;
    a.speed = 80 ;
    a.attack = 75 ;
    a.tier = 'A' ;

    // structure copy (deep copy)
    b = a ; // we can directly copy one structure to another 
    c = a ;
    
    b.attack = 150 ;
    printf("attack of b : %d\n",b.attack);
     printf("attack of a : %d\n",a.attack);

    // printf(" name of b : %s\n",b.name);
    // printf(" name of c : %s\n",c.name);
    // printf(" speed of b : %d\n",b.speed);
    // printf(" tier of c : %c\n",c.tier);

    return 0;
}