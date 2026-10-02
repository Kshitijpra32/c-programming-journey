/* Create a program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).*/

#include<stdio.h>

int main(){
    
    int num1;
    int num2;
    
    printf("\n The first number is: ");
    scanf("%d",&num1);
    
    printf("\n The Second number is: ");
    scanf("%d",&num2);
    
    int sum = num1 + num2;
    printf("\n The Sum of the Two Numbers is: %d ", sum );
    
    int subtract = num1 - num2;
    printf("\n The Subtraction of the Two Numbers is: %d ", subtract );
    
    int multiply = num1 * num2;
    printf("\n The Multiplication of the Two Numbers is: %d ", multiply );
    
    float divide = num1 / num2;
    printf("\n The Division of the Two Numbers is: %.2f ", divide );
    
    int modulus = num1 % num2;
    printf("\n The Modulus of the Two Numbers is: %d ", modulus );
    
    return 0;
}