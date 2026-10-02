/* Create a program to calculate product of two floating points numbers.*/

#include<stdio.h>

int main(){
    
    float num1;
    float num2;
    
    printf("The First Number is: ");
    scanf("%f",&num1);
    
    printf("The Second Number is: ");
    scanf("%f",&num2);
    
    float multiplication = num1 * num2;
    
    printf("The Multiplication num1 %.2f and num2 %.2f is: %.2f ",num1 , num2 , multiplication );
    
    
    return 0;
}