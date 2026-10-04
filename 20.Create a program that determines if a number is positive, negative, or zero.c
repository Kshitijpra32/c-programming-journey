/* Create a program that determines if a number is positive, negative, or zero. */

#include<stdio.h>

int main(){
    
    int num;
    
    printf("Enter a Number:");
    scanf("%d",&num);
    
    if(num > 0){
        printf("This number is Positive.");
    } else if(num == 0){
        printf("This number is Zero.");
    } else {
        printf("This number is Negative");
    }
    
    return 0;
}