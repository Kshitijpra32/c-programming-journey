/* Create a program that determines the greatest of the three numbers.*/

#include<stdio.h>

int main(){
    
    int num1;
    int num2;
    int num3;
    
    printf("Enter your First Number:");
    scanf("%d", &num1);
    
    printf("Enter your Second Number:");
    scanf("%d", &num2);
    
    printf("Enter your Third Number:");
    scanf("%d", &num3);
    
    if(num1 >= num2 && num1 >= num3){
        printf("The First Number is the greatest %d",num1);
    } else if(num2 >= num1 && num2 >= num3){
        printf("The Second Number is the greatest %d",num2);
    } else if(num3 >= num1 && num3 >= num2){
        printf("The Third Number is the greatest %d",num3);
    }
    return 0;
}