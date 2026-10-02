/* Create a program to calculate Perimeter of a rectangle Perimeter of rectangle ABCD = A+B+C+D. */

#include<stdio.h>

int main(){
    
    float A;
    float B;
    float C;
    float D;
    
    
    printf("\n The First Side A is:");
    scanf("%f",&A);
    
    printf("\n The Second Side B is:");
    scanf("%f",&B);
    
    printf("\n The Third Side C is:");
    scanf("%f",&C);
    
    printf("\n The Fourth Side D is:");
    scanf("%f",&D);
    
    float Perimeter_of_rectangle = A + B + C + D;
    
    printf("\n The Perimeter of rectangle is:%.2f", Perimeter_of_rectangle);

    return 0;
}