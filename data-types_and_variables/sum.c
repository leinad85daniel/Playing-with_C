/**
 * File: sum.c
 * Aim: To print sum of 3 numbers
 * Author: Daniel Yohannes
*/

#include <stdio.h>
int main(void)
    {
float a, b, c, sum;



printf("This program will calculate the sum of three numbers\n");
printf("please enter number1:");
scanf("%f" ,&a);
printf("please enter number2:");
scanf("%f" ,&b);
printf("please enter number3:");
scanf("%f" ,&c);

sum = a + b + c;

printf("The sum of %.2f ,%.2f and %.2f is %.2f: \n" , a , b , c, sum);
return(0);
    }
    

