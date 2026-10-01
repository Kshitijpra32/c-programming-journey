/* Create a program to define a constant for the mathematical value 
pi (3.14159) and use it to calculate and print the circumference of a 
circle with a radius input from user.*/


#define PI 3.14159
#include<stdio.h>

int main(){
    
    
    int radius;
    
    printf("Enter your Radius to Calculate the Circumference of a circle: ");
    scanf("%d",&radius);
    
    double C = 2 * PI * radius;
    
    printf("The Circumference of the circle is %.2f",C);
    return 0;
}


