// take user input for number of students and store marks of physics , chemistry and maths .

#include<stdio.h>
int main()
{ 
    int n ;
    printf("enter number of students :");
    scanf("%d",&n);
    int arr[n][4] ;
    
    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
           if(j==0)
            {
                arr[i][j]= i + 1 ;
            }

            if(j==1)
            {
                printf("enter marks of physics :");
                scanf("%d",&arr[i][j]);
            }

            if(j==2)
            {
                printf("enter marks of chemistry :");
                scanf("%d",&arr[i][j]);
            }

            if(j==3)
            {
                printf("enter marks of maths :");
                scanf("%d",&arr[i][j]);
            }

        }
       
    }

    for(int i = 0 ; i<n ; i++)
    {
        for(int j = 0 ; j<4 ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    
}