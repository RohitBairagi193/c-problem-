#include <stdio.h>
#include <math.h>  
int main()  
{  
   
    char operator;  
    float num1, num2;   
    float answer;  
   
    printf (" Select an operator (+, -, *, /): ");
     scanf("%c",&operator);

    printf (" Enter the first number: ");  
    scanf(" %f", &num1); 
    
    printf (" Enter the second number: ");  
    scanf (" %f", &num2); 
      
    if (operator == '+')  
    {  
        answer = num1 + num2; 
        printf (" Addition of %f and %f is %f" ,num1,num2,answer );  
    }  
      
    else if (operator == '-')  
    {  
         answer = num1 - num2; 
        printf (" Subtraction of %f and %f is %f", num1, num2,answer);  
    }  
      
    else if (operator == '*')  
    {  
        answer = num1 * num2;  
        printf (" Multiplication of %f and %f is %f", num1, num2,answer);  
    }  
      
    else if (operator == '/')  
    {  
        if (num2 == 0)   
        {  
            printf (" \n Divisor cannot be zero. Please enter another value ");  
            scanf ("%f", &num2);        
        }  
         answer = num1 / num2; 
        printf (" Division of %f and %f is %f", num1, num2,answer);  
    }  
    else  
    {  
        printf(" \n You have entered wrong inputs ");  
    }  
    return 0;  
}  