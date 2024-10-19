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

    // now if we want to form a new structure named LegendaryPokemon 
    // that has a special or diffrent attribute named ability with all 
    // the other attributes of pokemon , then there is no need to create a
    // a whole new structure with attributes same as pokemon
    
    // //no need to do this
    // typedef struct LegendaryPokemon
    // {
    //     int hp ;
    //     int speed ;
    //     int attack ;
    //     char tier ;
    //     char name[20];
    //     char ability[20] ;
    // } L_Pokemon ;

    // instead do this
    typedef struct LegendaryPokemon
    {
        pokemon normal ; //this encompasses all the attributes of structure Pokemon
        char ability[20] ;
    } L_Pokemon ;

    L_Pokemon mewtwo ;
    strcpy(mewtwo.ability , "pressure");
    // mewtwo.hp = 180 ; // error !! 
    mewtwo.normal.hp = 180 ; //correct way
    mewtwo.normal.attack = 190 ;
    mewtwo.normal.speed = 150 ; 
    mewtwo.normal.tier = 'L' ;
    strcpy(mewtwo.normal.name,"MEWTWO");

    typedef struct GodPokemon
    {
        L_Pokemon x ; //this encompasses all the attributes of structure LegendaryPokemon
        char baapPOWER[20] ;
    } G_Pokemon ;
    
    G_Pokemon pikachu ;
    
    pikachu.x.normal.tier = 'A';
    strcpy(pikachu.baapPOWER , "cuteness");
    strcpy(pikachu.x.ability,"speed");

    printf("TIER : %c \n",pikachu.x.normal.tier);
    printf("BaapPower : %s \n",pikachu.baapPOWER);
    printf("ABILITY : %s \n",pikachu.x.ability);


    return 0 ;
}

