/*Create a program to find the minimum of two numbers using ternary operator.*/

#include <stdio.h>

int main()
{
    
    int num1;
    int num2;
    int temp;
    
    printf("Enter the First number:");
    scanf("%d",&num1);
    
    printf("Enter the Second number:");
    scanf("%d",&num2);
    
    temp = (num1 < num2) ? num1 : num2;
    
    printf("The minimum number is: %d",temp);
    
    
    return 0;
}