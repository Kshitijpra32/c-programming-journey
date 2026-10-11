/*   Write a function that calculates the factorial of a given number.c */

#include<stdio.h>

int factorial(int n){
    int fact = 1;
    
    for(int i = 1 ; i <= n ; i++){
        fact = fact * i;
    }
    
    return fact;
}

int main(){
    
    int n;
    
    printf("Enter a Number to find a factorial: ");
    scanf("%d",&n);
    
    printf("Factorial of %d and %d ",n , factorial(n));
    
    return 0;
}

