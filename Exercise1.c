/*This program will contain different exercises that have been done with C*/
/*The program solves the exercises taken from the book C Programming: A modern approach book,*/
/*Questions are taken from Chapter 5 - Programming Projects (questions 7,9,10 and 11)*/
/*To compile this program in Ubuntu or other Linux Distributions you run the command: gcc -o Exercise1 Exercise1.c */
/*Make sure you are in the correct folder path before doing so*/
/*To run the command you can use the command: ./Exercise1 */
/*The first exercise will recieve four integers from the user */
/*and display the greatest as well as smallest integer*/

#include<stdio.h>

int main(){
    int num1; 
    int num2;
    int num3;
    int num4;
    int largestNum;
    int smallestNum;

    printf("Hello There! Please enter 4 integers.\n");
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);
    printf("Enter the third integer: ");
    scanf("%d", &num3);
    printf("Enter the fourth integer: ");
    scanf("%d", &num4);


    /*To check for the greatest integer*/
    if(num1 > num2 && num1 > num3 && num1 > num4){
        printf("The largest integer is: %d.\n", num1);
    }

    if(num2 > num1 && num2 > num3 && num2 > num4){
        printf("The largest integer is: %d.\n", num2);
    }

    if(num3 > num1 && num3 > num2 && num3 > num4){
        printf("The largest integer is: %d.\n", num3);
    }

    else if (num4 > num1 && num4 > num2 && num4 > num1) {
        printf("The largest interger is: %d.\n", num4);
    }



    /*To check for the smallest integer*/
    if(num1 < num2 && num1 < num3 && num1 < num4){
        printf("The smallest integer is: %d.\n", num1);
    }

    if(num2 < num1 && num2 < num3 && num2 < num4){
        printf("The smallest integer is: %d.\n", num2);
    }

    if(num3 < num1 && num3 < num2 && num3 < num4){
        printf("The smallest integer is: %d.\n", num3);
    }

    else if(num4 < num1 && num4 < num2 && num4 < num3) {
        printf("The smallest interger is: %d.\n", num4);
    }
    return 0;
}
