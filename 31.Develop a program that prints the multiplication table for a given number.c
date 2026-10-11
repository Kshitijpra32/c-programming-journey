/*  Develop a program that prints the multiplication table for a given number. */

#include<stdio.h>

int main(){
    
    int num;
    printf("Enter a number for a table:");
    scanf("%d",&num);
    
    for(int i = 1 ;  i <=10 ; i++) {
        printf("%d * %d = %d\n",num , i , num * i );
    }
    
    return 0;
}