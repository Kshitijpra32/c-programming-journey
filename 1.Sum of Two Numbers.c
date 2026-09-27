/* Sum of two numbers */

#include<stdio.h>
    int main(){
        int num1;
        int num2;
        int sum;
        
        printf("Enter your first number: ");
        scanf("%d" , &num1);
        
        printf("Enter your Second number: ");
        scanf("%d" , &num2);
        
        sum = num1 + num2;
        
        printf("The Sum of %d and %d is: %d", num1 , num2 ,sum);
        return 0;
    }