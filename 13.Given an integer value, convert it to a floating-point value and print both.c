/* Given an integer value, convert it to a floating-point value and print both.c */

#include<stdio.h>

int main(){
    
    int num = 234;
    
    float converted = (float)num;
    
    printf("\n The integer value is: %d", num);
    
    printf("\n The Float Value is: %.2f ", converted);
    
    return 0;
}
