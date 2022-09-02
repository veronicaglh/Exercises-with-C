/*This exercise will recieve an integer value (from the range 0-100) from the user */
/*and display the grade of the user*/
#include<stdio.h>
 
int main(){
    int grade; 
    int firstDigitGrade;
    int secondDigitGrade;


    printf("Please enter your grade: ");
    scanf("%d",&grade);
    printf("Please enter the first digit of your grade: ");
    scanf("%d",&firstDigitGrade);
    printf("Please enter the second digit of your grade: ");
    scanf("%d",&secondDigitGrade);

    
    
    switch(firstDigitGrade){
        case 9: printf("You got a %d.Congrats that's an A.\n",grade);
        break; 

        case 8: printf("You got a %d. That is a B.\n",grade);
        break; 

        case 7: printf("You got a %d.Thats a C.\n",grade);
        break;

        case 6: printf("You got a %d.Thats a D\n",grade);
        break;

        case 5: case 4: case 3: case 2: case 1: printf("You got a %d.Thats a F.\n",grade);
        break;

        default: printf("Invalid input. Grades can only be from 0 - 100.\n");
        break;
    }
 
    return 0;
}