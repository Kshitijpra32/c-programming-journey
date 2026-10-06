/*Create a program that determines if a given year is a leap year (considering conditions like divisible by 4 but not 100, unless also divisible by 400).*/

#include <stdio.h>

int main()
{
    int year;
    
    printf("Enter a Year which you want to know that it is leap year or not? :");
    scanf("%d",&year);
    
    if( year % 400 == 0 || year % 4 == 0 && year % 100 != 0 ){
        printf("It is the Leap Year.");
    } else {
        printf("It's not a Leap Year.");
    }

    return 0;
}