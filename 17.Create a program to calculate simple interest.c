/* Create a program to calculate simple interest.Simple Interest = (P x T x R)/100 */

#include<stdio.h>

int main(){
    
    float P;
    float T;
    float R;
    
    printf("The Priniciple of Simple Interest is:");
    scanf("%f",&P);
    
    printf("The Time period of Simple Interest is:");
    scanf("%f",&T);
    
    printf("The Rate Interest of Simple Interest is:");
    scanf("%f",&R);
    
    float Simple_Interest = (P * T * R) / 100;
    
    printf("The Simple Interest of the Amount is: %.2f", Simple_Interest);
    
    return 0;
    
}