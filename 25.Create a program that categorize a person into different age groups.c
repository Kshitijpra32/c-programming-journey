/*Create a program that categorize a person into different age groups 
Child -> below 13                    
Teen -> below 20
Adult -> below 60                   
Senior-> above 60
*/

#include <stdio.h>

int main()
{
    int age;
    
    printf("Enter Your Age:");
    scanf("%d",&age);
    
    if( age < 13 ){
        printf("This age groups belongs to Child.");
    } else if( age < 20 ){
        printf("This age groups belongs to Teen.");
    } else if( age < 60 ){
        printf("This age group belongs to Adult.");
    } else {
        printf("This age group belongs to Senior.");
    }
   
   
    return 0;
}