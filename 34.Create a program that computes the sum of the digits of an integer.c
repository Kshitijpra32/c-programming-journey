/*  Create a program that computes the sum of the digits of an integer..c */

#include<stdio.h>

int main(){
    
    int n , i , sum = 0;
    
    printf("Enter a number to sum: ");
    scanf("%d",&n);
    
    while(n > 0){
        i = n % 10;
        sum = sum + i;
        n = n/10;
    }
    printf("The sum of the all numbers is %d",sum);
}