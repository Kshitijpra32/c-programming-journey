/* Create a program to calculate Compound interest.Compound Interest = P(1 + R/100)t */


#include<stdio.h>

int main(){
    
    float P;
    float R;
    float T;
    
    printf("The Priniciple of Compound Interest:");
    scanf("%f",&P);
    
    printf("The Rate of Interest is:");
    scanf("%f",&R);
    
    printf("The time Period of Compound Interest is:");
    scanf("%f",&T);
    
    
    float Compound_Interest = P * (1 + R / 100) * T;
    
    printf("The Compound Interest is:%.2f", Compound_Interest);
    
    return 0;
}