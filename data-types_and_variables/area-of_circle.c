/**
 * File: area-of_circle.c
 * Aim: To calculate area of a circle and print the result in two decimal points
 * Author: Daniel Yohannes
*/
#include <stdio.h>
#define pi 3.1416

int main(void)
{

float rad;

    printf("Please, enter the radius of the circle: \n");
    scanf("%f" ,&rad);
    printf("The are of the circle is: %.2f\n" , pi * (rad * rad));
    return(0);
}


