/*  Create a program to sum all odd numbers from 1 to a specified number N */

#include<stdio.h>

int main(){
    
    int n, i , sum =0;
    
    printf("Enter a number: ");
    scanf("%d",&n);
    
    for(i = 1 ; i <= n ; i++){
        if(i % 2 != 0){
            printf("%d is the odd number\n", i);
        sum = sum + i;
        }
        
    }
    
    printf("The sum of all odd number is %d\n",sum);
    
    return 0;
}