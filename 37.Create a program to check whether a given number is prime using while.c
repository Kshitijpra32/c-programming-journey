/* Create a program to check whether a given number is prime using while.c */

#include<stdio.h>

int main(){
    
    int num ;
    
    printf("Enter a number to check weather its prime or not: ");
    scanf("%d",&num);
    
    for(int i = 2 ; i < num ; i++ ){
        if(num % i == 0){
            printf("%d its not a prime number.",num);
            return 0;
        }
    }
    printf("%d it is a prime number",num);
    
    
    
    return 0;
}