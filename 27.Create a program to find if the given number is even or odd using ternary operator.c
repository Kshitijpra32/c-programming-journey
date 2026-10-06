/* Create a program to find if the given number is even or odd using ternary operator.*/

#include <stdio.h>

int main()
{
    int num;
    
    printf("The number is:");
    scanf("%d",&num);
    
    ( num % 2 == 0 ) ? printf("This is an even number.") : printf("This is an Odd number.");
    
    
    return 0;
}