/*  Create a program to find the Greatest Common Divisor (GCD) of two integers.c */

#include<stdio.h>

int main(){
    
    int a , b ,i , gcd = 1;
    
    printf("Enter a first number: ");
    scanf("%d",&a);
    
    printf("Enter a Second number: ");
    scanf("%d",&b);
    
    int limit = (a < b) ? a : b;
    
    for(i = 1 ; i <= limit ; i++){
        if(a % i == 0 && b % i == 0){
            gcd = i;
        }
    }
    
    printf("The GCD is %d\n",gcd);
    
    
    return 0;
}