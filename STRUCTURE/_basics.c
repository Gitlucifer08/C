// method 1 for initialization -->
#include<stdio.h>
int main()
{
    // decleration
    struct pokemon // A USER DEFINED DATA TYPE OF NAME POKEMON IS FORMED 
    {
        int hp;          // hp , speed , attack , tier are attributes of pokemon structure
        int speed;
        int attack;
        char tier; // G , S , A , B , C , D
    }; // SEMICOLON IS NECESSARY

    // initialization
    struct pokemon pikachu;
    pikachu.attack = 80 ;
    pikachu.hp = 70 ;
    pikachu.speed = 100 ;
    pikachu.tier = 'A' ;

    // accessing
    printf("attack of pikachu is : %d\n",pikachu.attack) ;

    struct pokemon charizard;
    charizard.attack = 100 ;
    charizard.hp = 80 ;
    printf("enter speed of charizard :");
    scanf("%d",&charizard.speed) ;
    charizard.tier = 'S' ;

    printf("speed of charizard is : %d\n",charizard.speed) ;

    struct pokemon mewtwo;
    mewtwo.attack = 200 ;
    mewtwo.hp = 180 ;
    mewtwo.speed = 205 ;
    mewtwo.tier = 'G' ;

    printf("tier of mewtwo is : %c\n",pikachu.tier) ;

    return 0;
}

// method 2 for initialization -->
// #include<stdio.h>
// int main()
// {
//     // decleration
//     struct pokemon // A USER DEFINED DATA TYPE OF NAME POKEMON IS FORMED 
//     {
//         int hp;          // hp , speed , attack , tier are attributes of pokemon structure
//         int speed;
//         int attack;
//         char tier; // G , S , A , B , C , D
//     } pikachu , charizard , mewtwo ;  // initialization // SEMICOLON IS NECESSARY

    
//     pikachu.attack = 80 ;
//     pikachu.hp = 70 ;
//     pikachu.speed = 100 ;
//     pikachu.tier = 'A' ;

//     // accessing
//     printf("attack of pikachu is : %d\n",pikachu.attack) ;

//     charizard.attack = 100 ;
//     charizard.hp = 80 ;
//     printf("enter speed of charizard :");
//     scanf("%d",&charizard.speed) ;
//     charizard.tier = 'S' ;

//     printf("speed of charizard is : %d\n",pikachu.speed) ;

//     mewtwo.attack = 200 ;
//     mewtwo.hp = 180 ;
//     mewtwo.speed = 205 ;
//     mewtwo.tier = 'G' ;

//     printf("tier of mewtwo is : %c\n",pikachu.tier) ;

//     return 0;
// }
