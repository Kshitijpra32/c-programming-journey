/* Create a program to calculate the absolute value of a given integer using ternary operator.*/

#include<stdio.h>

int main(){
    
    int num;
    int absolute;
    
    printf("Enter a Integer:");
    scanf("%d",&num);
    
    absolute = (num < 0) ? -num : num;
    
    printf("Absolute value:%d",absolute);
    
    return 0;
}