/**
 * File: someto100.c
 * Aim: To print all the numbers from some number to 100
 * Author: Daniel Yohannes
*/

#include <stdio.h>
int main(void)
{

int a;

printf("This program will print numbers to 100 based on your input.\n");
printf("please enter a number:\n");
scanf("%d" ,&a);
while(a < 101)
{
printf("%d\n" ,a);
a++;
}
return(0);
}