/*Create a program that declares one variable of each of the 
fundamental data types (int, float, double, char) and prints their 
size using sizeof() operator*/


#include<stdio.h>

int main(){
    
    int age;
    char name;
    float plate;
    double size;
    
        
            printf("Size of int: %zu bytes \n",sizeof(age));
            printf("Size of char: %zu bytes\n",sizeof(name));
            printf("Size of float: %zu bytes \n",sizeof(plate));
            printf("Size of double: %zu bytes \n",sizeof(size));
            
    return 0;
}














