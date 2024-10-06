// do try run in copy for n = 5
// CONDITION WHEN YOU CAN ONLY CLIMB  1 STEP OR 2 STEP AT A TIME

#include<stdio.h>

int stairs(int s)
{
    if (s == 1 ) return 1 ;
    if (s == 2 ) return 2 ; // or dirctly use if(s==1 || s==2) return n ;

    int ans1 = stairs(s-1);
    int ans2 = stairs(s-2);
    int ways = ans1 + ans2 ; 
    return ways ;

}

int main ()
{
    int n; 
    printf("enter the nth stairs : ");
    scanf("%d",&n);   
    printf(" number of ways to reach stairs is :%d",stairs(n));
    return 0 ;
}
// WRITE CODE FOR CASE WHEN YOU CAN ONLY CLIMB  1 STEP OR 2 STEP  OR 3 STEP AT A TIME .