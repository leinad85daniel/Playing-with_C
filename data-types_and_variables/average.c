/**
 * File: average.c
 * Aim: To calculate the average of 3 numbers
 * Author: Daniel Yohannes
*/
#include <stdio.h>
int main(void)
{
double x, y, z, avg;
avg = (x + y + z) / 3;

    printf("This program will calculate the average of 3 numbers. \n"); 
    printf("please enter number 1:");
    scanf("%lf" ,&x);
    printf("please enter number 2:");
    scanf("%lf" ,&y);
    printf("please enter number 3:");
    scanf("%lf" ,&z);
    avg = (x + y + z) / 3;
    printf("The average of %.2lf, %.2lf and %.2lf is : %.2lf \n" ,x ,y ,z ,avg);
    return(0);
}
