1. MAIN ();
    there should be a main() .
    if only one function is present then it should be main() .
2. function prototype(ex. void india(); ) is not necessary , but if not used then the
   function should be declared before the main() function or the function in which it is called ,
   otherwise it will give an error .
   example -->
   #include<stdio.h>
   
   int main()
   {
    hello();
    return 0;
   }

     void hello()
    {
        printf("Hello, World!");
        return ;             //return 0; will be wrong as it is used int , char data type 
                             //   return statement is not necessary IN CASE OF VOID , but it is good practice to use it

    }
    
   
   
    