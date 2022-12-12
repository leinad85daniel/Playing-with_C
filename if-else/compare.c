/**
 * File: compare.c
 * Aim: To compare two numbers
 * Author: Daniel Yohannes
*/

#include <stdio.h>
int main(void)
{

float a, b;

    printf("This program will compare two numbers.\n");
    printf("please enter number1:\n");
    scanf("%f" ,&a);
    printf("please enter number2:\n");
    scanf("%f" ,&b);
    
    if (a < b){

        printf("%.2f < %.2f.\n" ,a ,b);
    }
    
    else{

printf("%.2f > %.2f.\n" , a , b);

    }
    
    return(0);
}

