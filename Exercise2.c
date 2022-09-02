/*This exercise will recieve two different dates from the user */
/*the program then compare the two dates and will display the date that comes earlier*/

#include<stdio.h>

int main(){
    /*Variables for the first date*/
    int month1; 
    int day1;
    int year1;

    /*Variables for the second date*/
    int month2;
    int day2;
    int year2;

    printf("Fill the entries for the first date: \n");
    printf("Month: ");
    scanf("%d", &month1);
    printf("Day: ");
    scanf("%d", &day1);
    printf("Year: ");
    scanf("%d", &year1);
    printf("\n");

    printf("Fill the entries for the second date: \n");
    printf("Month: ");
    scanf("%d", &month2);
    printf("Day: ");
    scanf("%d", &day2);
    printf("Year: ");
    scanf("%d", &year2);
    



    /*To correct user if they input invalid value for day, month or year*/
    if (month1 > 12 || month2 > 12 || month1 == 0 || month2 == 0){
        printf("Sorry, You can only input a number from 1 - 12 for the month entry.\n");
         }

    if (day1>31 || day2>31 || day1 == 0 || day2 == 0){
        printf("Sorry. You can only input a number from 1-31 for the day entry.\n");
    }


    /*To check by year*/
    if (year1 > year2){
        printf("The date: %d/%d/%d is earlier than %d/%d/%d \n", month2, day2, year2, month1, day1, year1); 
    }
    else if(year2 > year1) {
        printf("The date: %d/%d/%d is earlier than %d/%d/%d \n", month1, day1, year1, month2, day2, year2);
    }

    /*To check by month*/
    if (month1 > month2 && year1==year2){
        printf("The date: %d/%d/%d is earlier than %d/%d/%d \n", month2, day2, year2, month1, day1, year1);
    }

    else if(month2 > month1 && year1==year2) {
        printf("The date: %d/%d/%d is earlier than %d/%d/%d \n", month1, day1, year1, month2, day2, year2);
    }

    /*To check by date*/
    if (day1 > day2 && month1==month2 && year1==year2){
        printf("The date: %d/%d/%d is earlier than %d/%d/%d \n", month2, day2, year2, month1, day1, year1);
    }

    else if(day2 > day1 && month1==month2 && year1==year2) {
        printf("The date: %d/%d/%d is earlier than %d/%d/%d \n", month1, day1, year1, month2, day2, year2);
    }

    return 0;
}