#include<stdio.h>
int main()
{
    int p,q;
    char ch ;
  
    char c='y';
    while(c == 'y')
    {

    printf("\nenter two numbers :");
    scanf("%d%d",&p,&q);
    printf("choose operation to perform +,-,*,/ :");
    scanf(" %c",&ch);

    // switch(ch)
    // {
    //     case '+':
    //         printf("the sum of %d and %d is %d",p,q,p+q);
    //         break;
    //     case '-':
    //         printf("the subtraction  of %d and %d is %d",p,q,p-q);
    //         break;
    //     case '*':
    //         printf("the multiplication of %d and %d is %d",p,q,p*q);
    //         break;
    //     case '/':
    //         printf("the division of %d and %d is %f",p,q,(float)p/q);// typecasting is important to get proper division
    //         break;
    //     default:
    //         printf("invalid choice ! ");
            
    // }

    if(ch == '+')
        printf("the sum of %d and %d is %d",p,q,p+q);
    else if(ch == '-')
        printf("the subtraction  of %d and %d is %d",p,q,p-q);
    else if(ch == '*')
        printf("the multiplication of %d and %d is %d",p,q,p*q);
    else if(ch == '/')
        printf("the division of %d and %d is %f",p,q,(float)p/q);// typecasting is important to get proper division
    else 
        printf("invalid choice !!");

    printf("\nstill want to continue : y/n ");
    scanf(" %c",&c);// space before %c is necessary to flush previous inputs

    }

return 0;;

}