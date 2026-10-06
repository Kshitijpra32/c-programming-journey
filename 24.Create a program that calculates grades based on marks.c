/*Create a program that calculates grades based on marks. 
A -> above 90%                        
B -> above 75%
C -> above 60%                        
D -> above 30%
F -> below 30%*/

#include <stdio.h>

int main()
{
   float marks;
   
   printf("Enter your Marks:");
   scanf("%f",&marks);
   
   
   if( marks >= 90 ){
       printf("Your grades is 'A'.");
   } else if( marks >= 75 && marks < 90 ){
       printf("Your grades is 'B'.");
   } else if( marks >= 60 && marks < 75 ){
       printf("Your grades is 'C'.");
   } else if( marks >= 30 && marks < 60 ){
       printf("Your grades is 'D'.");
   } else {
       printf("Your grades is 'F'.");
   }

    return 0;
}