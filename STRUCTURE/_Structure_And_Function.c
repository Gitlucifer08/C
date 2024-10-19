// code with error

// #include<stdio.h>
// #include<string.h>

// void fun(pokemon x)
// {
//     printf("%d",x.hp);
//     return;
// }

// int main()
// {
//     typedef struct pokemon
//     {
//         int hp ;
//         int speed ;
//         int attack ;
//         char tier ;
//         char name[20];
//     } pokemon ;

//     pokemon pikachu ;
//     pikachu.hp = 60 ;

//     fun(pikachu); // not pokemon pikachu !!
//     // this will not work as structure pokemon is only defines in main so to utilise it we must declare it outside .
    

//     return 0 ;
// }


// corrected code

// #include<stdio.h>
// #include<string.h>

// typedef struct pokemon // global declaration
//     {
//         int hp ;
//         int speed ;
//         int attack ;
//         char tier ;
//         char name[20];
//     } pokemon ;

// void fun(pokemon x)
// {
//     printf("%d",x.hp);
//     return;
// }

// int main()
// {
    

//     pokemon pikachu ;
//     pikachu.hp = 60 ;

//     fun(pikachu);
    
//     return 0 ;
// }


// pass by value is done in structure


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

// void fun(pokemon x)
// {
//     printf("%d",x.hp);
//     return;
// }

void change(pokemon y)
{
    y.hp = 50;
    y.attack = 150 ;
    y.speed = 200 ;

    
    printf("values in change function -->\n\n");
    printf("%d\n",y.hp);
    printf("%d\n",y.attack);
    printf("%d\n",y.speed);

}

int main()
{
    

    pokemon pikachu ;
    pikachu.hp = 60 ;
    pikachu.attack = 90 ;
    pikachu.speed = 110 ;

    change(pikachu);
    //fun(pikachu);

    printf("values in main -->\n\n");
    printf("%d\n",pikachu.hp);
    printf("%d\n",pikachu.attack);
    printf("%d\n",pikachu.speed);

    // as values in main does not change so pass by value
    
    return 0 ;
}

