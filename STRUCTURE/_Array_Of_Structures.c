#include<stdio.h>
#include<string.h>
int main()
{
    typedef struct pokemon{
        int hp ;
        int speed ;
        int attack ;
        char tier ;
        char name[20];
    } pokemon ; //now no need to write struck pokemon only pokemon

    pokemon arr[3] ;

    // BORING WAY !!
    arr[0].attack = 50;
    arr[0].hp = 40;
    arr[0].tier = 'B';
    arr[0].speed = 67 ;
    //arr[0].name = "charizard"; // WRONG ALREADY DISCUSSED
    strcpy(arr[0].name,"charizard");

    arr[1].attack = 32;
    arr[1].hp = 43;
    arr[1].tier = 'C';
    arr[1].speed = 32 ;
    strcpy(arr[1].name,"bulbasore");

    arr[2].attack = 60;
    arr[2].hp = 87;
    arr[2].tier = 'D';
    arr[2].speed = 77 ;
    strcpy(arr[2].name,"charmendor");



    // // error : The problem is that you are trying to redeclare and reassign the arr elements like you would with a normal variable, but arr has already been declared as an array.
    // pokemon arr[0] = {50 , 40 ,'B' , 67 , "charizard"} ; 
    // pokemon arr[1] = {32 , 43 ,'C' , 32 , "blastoise"} ; 
    // pokemon arr[2] = {60 , 87 ,'D' , 77 , "charmendor"} ; 



    // // BEST METHOD ( This fixes the error by using a cast to the pokemon type for initializing each array element.)
    // arr[0] =  ( pokemon ) {50 , 40 ,'B' , 67 , "charizard"} ; // no need of strcpy
    // arr[1] =  ( pokemon ) {32 , 43 ,'C' , 32 , "blastoise"} ; 
    // arr[2] =  ( pokemon ) {60 , 87 ,'D' , 77 , "charmendor"} ; 


    
    printf("\nthe data of pokemon is -->\n");

    for(int i=0 ; i<3 ; i++)
    {
        printf("\n\npokemon : %s\n",arr[i].name);// imp %s use hoga
        printf("\nattack of pokemon : %d",arr[i].attack);
        printf("\nhp of pokemon : %d",arr[i].hp);
        printf("\nspeed of pokemon : %d",arr[i].speed);
        printf("\ntier of pokemon :  %c",arr[i].tier);  
        
    }

    return 0 ;
}