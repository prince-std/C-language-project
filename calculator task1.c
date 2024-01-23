#include <stdio.h>  
#include <conio.h>  
#include <math.h>  
#include <stdlib.h>  
      
// function declarations   
int addition();  
int subtract();  
int multiply();  
int divide();  
int square();  
int sqrt1();  
void exit();  
  
int main()  
{  
    // declaration a local variable op;  
    int option;  
    do  
    {  
        // displays the multiple operations of the C Calculator  
        printf (" Select an operation to perform the calculation in C Calculator: ");  
        printf (" \n 1 Addition  \t \t 2 Subtraction \n 3 Multiplication \t 4 Division \n 5 Square \t \t 6 Square Root \n 7 Exit \n \n Please, select the option to perform the operation : ");      
          
        scanf ("%d", &option); 
      
      
    switch (option)  
    {  
        case 1:  
         printf (" You chose: Addition\n");  
            addition(); /* It call the addition() function  to add the given numbers */  
            break; 
              
        case 2:  
         printf (" You chose: Subtraction\n");  
            subtract(); /* It call the subtract() function  to subtract the given numbers */  
            break; 
              
        case 3:  
          printf (" You chose: Multiplication\n");  
            multiply(); /* It call the multiply() function  to multiply the given numbers */  
            break; 
              
        case 4:  
        printf (" You chose: Division\n");  
            divide(); // It call the divide() function  to divide the given numbers  
            break;  
              
        case 5:  
         printf (" You chose: Square\n");  
            square(); // It call the sq() function  to get the square of given numbers  
            break; 
              
        case 6:  
        printf (" You chose: Square Root\n");
            sqrt1(); /* It call the sqrt1() function  to get the square root of given numbers */  
            break;   
              
        case 7:  
         printf (" You chose to: Exit the program \n");  
            exit(0); // It call the exit() function  to exit from the program  
            break;   
              
        default:  
            printf(" Something is wrong!! ");  
            break;                        
    }  
    printf ("\n ................................................ \n \n ");  
    } while (option != 7);  
      
  
    return 0;        
}  
  
  
  
// function definition 
int addition()  
{  
    int i, sum = 0, num, f_num; // declare a local variable   
    printf (" How many numbers you want to add: ");  
    scanf ("%d", &num);  
    printf (" Enter the numbers: \n ");  
    for (i = 1; i <= num; i++)  
    {  
        scanf(" %d", &f_num);  
        sum = sum + f_num;  
    }  
    printf (" Total Sum of the numbers = %d", sum);  
    return 0;  
}  
  
int subtract()  
{  
    int n1, n2, result;  
    printf (" Enter the first number: ");  
    scanf ("  %d", &n1);  
    printf (" Enter the second number : ");  
    scanf ("  %d", &n2);  
    result = n1 - n2;    
    printf (" The subtraction of %d - %d is:- %d", n1, n2, result);  
}  
  
int multiply()  
{  
    int n1, n2, result;  
    printf (" Enter the first number: ");  
    scanf ("  %d", &n1);  
    printf (" Enter the second number: ");  
    scanf ("  %d", &n2);  
    result = n1 * n2;    
    printf (" The multiply of %d * %d is:- %d", n1, n2, result);  
}  
    
int divide()  
{  
    int n1, n2, result;  
    printf (" Enter the first number: ");  
    scanf ("  %d", &n1);  
    printf (" Enter the second number: ");  
    scanf ("  %d", &n2);  
      
    if (n2 == 0)  
    {  
        printf (" \n Divisor cannot be zero. Please enter another value ");  
        scanf ("%d", &n2);        
    }  
    result = n1 / n2;    
    printf (" \n The division of %d / %d is:- %d", n1, n2, result);  
}  
  

int square()  
{  
    int n1, result;  
    printf (" Enter the  number to get the Square: ");  
    scanf ("  %d", &n1);  
      
    result = n1 * n1;    
    printf (" \n The Square of %d is:- %d", n1, result);  
}  
    
int sqrt1()  
{  
    float result;  
    int n1;  
    printf (" Enter the  number to get the Square Root:- ");  
    scanf ("  %d", &n1);  
  
    result = sqrt(n1);   
    printf (" \n The Square Root of %d is: %f", n1, result);  
}  
