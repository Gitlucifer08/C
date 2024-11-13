# MAIN ()

    1. there should be a main() .
    2. if only one function is present then it should be main() .

## function prototype

    1. function prototype(ex. void india(); ) is not necessary , but if not used then the
       function should be declared before the main() function or the function in which it is called ,
       otherwise it will give an error .
    
    2. return statement is not necessary IN CASE OF VOID , but it is good practice to use it
    
    3. return 0 ; will be wrong in case of void it is used int , char data type 
  
    example -->
   '''c

    #include<stdio.h>
    
     void hello()
    {
        printf("Hello, World!");
        return ;             
     }
   
    int main() {
    hello();
    return 0;}  
'''
