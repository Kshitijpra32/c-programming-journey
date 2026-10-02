/* Create a program to convert Fahrenheit to Celsius °C = (°F - 32) × 5/9 */

#include<stdio.h>

int main(){
    
    float F;
    
    printf("The Fahrenheit is the:");
    scanf("%f",&F);
    
    float Celsius = (F - 32) * 5 / 9;
    
    printf("The Celsius temperture is:%f",Celsius);
    
    return 0;
    
}