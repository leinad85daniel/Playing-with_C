/**
 * File: ascii-value.c
 * Aim: To print the ASCII value of 'a' and '@'
 * Author: Daniel Yohannes
*/

#include <stdio.h>

int main(void)
{

char a;

printf("Please, enter the character to know the ASCII value: ");
scanf("%c" ,&a);
printf("Ascii value of %c is: %d\n" , a , a);


    return(0);
}
