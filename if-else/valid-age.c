/**
 * File: valid-age.c
 * Aim: To test if the user is unacceptable(under or over age) or acceptable
 * Author: Daniel Yohannes
*/

#include<stdio.h>

int main(void)
{

    int age;
    char name[100];
    char email[100];

printf("This program will check if you are valid or not for this program.\n");
printf("please enter your age: \n");
scanf("%d" ,&age);

if (age < 18){
    printf("Sorry, you are underage!\n");
}
else if (age > 35){
    printf("Sorry, you are overage!\n");

}
else {
    printf("Congratulations! You are valid for this programme.\n");
    printf("What is your name:\n");
    scanf("%s %s" ,name ,name);
    printf("What is your email address:\n");
    scanf("%s" ,email);
    printf("You have completed applying to the program, we will send the results via email\n");
    printf("Thank you!\n");

}
    return(0);
}