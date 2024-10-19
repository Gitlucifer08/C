#include<stdio.h>
#include<string.h>
typedef union pokemon
{
    int hp;
    int attack;
    int speed ;
    char tier ;
    char name[15];
} pokemon ;
// SIZE OF UNION WILL BE EQUAL TO THE SIZE OF ITS LARGEST MEMBER (name[15] in this case) with this space it can always access one member . while in case of structure size is equal to the sum of sizes of individual members .
// if all members are intialised then the last initialization will be used only .
// only one member can be used at a time .
int main ()
{
    pokemon pikachu ; 
    pikachu.attack =100;
    pikachu.hp = 70; 
    strcpy(pikachu.name , "raichu"); // if last all output will be garbage value for %d and r (first character) for %c and raichu for %s .
    //pikachu.speed = 110; // if last initialized all output will be 110 for %d and n for %c and %s
    //pikachu.tier = 'A' ; // if last initialized all output will be 65 for %d and A for %c and %s

    printf("attack : %d \n",pikachu.attack);    
    printf("hp : %d \n",pikachu.hp);
    printf("speed : %d \n",pikachu.speed);
    printf("tier :%c \n",pikachu.tier);
    printf("name :%s \n",pikachu.name);

    return 0;

    
} 