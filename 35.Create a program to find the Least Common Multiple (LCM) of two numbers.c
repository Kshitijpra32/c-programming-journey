/*  Create a program to find the Least Common Multiple (LCM) of two numbers.c */

#include<stdio.h>

int main(){
    
    int a , b , i;
    
    printf("Enter a First Number 'a': ");
    scanf("%d",&a);
    
    printf("Enter a Second Number 'b': ");
    scanf("%d",&b);
    
    if(a <= 0 || b <= 0){
        printf("Please Enter a Positive,Non Zero integers.\n");
        return 0;
    }
   
   i = (a > b) ? a : b;
   
   while(i % a != 0 || i % b != 0){
       i++;
   }
   
   printf("The LCM of %d and %d is %d\n",a , b, i);
    return 0;
}