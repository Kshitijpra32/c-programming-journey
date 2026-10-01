/* Create a program to print the area of a circle by inputting its radius.*/

#define PI 3.14159
#include<stdio.h>

int main(){
    
    int radius;
    
    printf("Enter the radius of the circle which you have to find out: ");
    scanf("%d",&radius);
    
    float area = PI * radius * radius;
    
    printf("The Area of circle is : %.2f ", area);
    
    return 0;
}


