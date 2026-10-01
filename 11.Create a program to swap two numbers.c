/* Create a program to swap two numbers. */

#include<stdio.h>
 
int main(){
    
    int a = 2;
    int b = 1;
    int temp;
    
    temp = a;
    a = b;
    b = temp;
    
    
    printf("The swapped a is %d and b is %d", a , b);
    
    return 0;
}


