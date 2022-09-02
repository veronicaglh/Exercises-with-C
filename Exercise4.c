/*This exercise will recieve a two digit number from the user */
/*and display english word equivalent to that number. 
Eg: 45 --> Forty Five*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int firstDigit;
   int secondDigit;

    printf("Enter a two digit number: ");
    scanf("%1d%1d", &firstDigit, &secondDigit);



    switch(firstDigit){
     case 1:
        switch (secondDigit){
            case 0: printf("ten");
                    break;
            case 1: printf("eleven");
                    break;
            case 2: printf("twelve");
                    break;
            case 3: printf("thirteen");
                    break;
            case 4: printf("fourteen");
                    break;
            case 5: printf("fifteen");
                    break;
            case 6: printf("sixteen");
                    break;
            case 7: printf("seventeen");
                    break;
            case 8: printf("eighteen");
                    break;
            case 9: printf("nineteen");
                    break;
    }
    printf(".\n\n");
    return 0;

     case 2: printf("twenty");
                 break;
     case 3: printf("thirty");
                 break;
     case 4: printf("forty");
                 break;
     case 5: printf("fifty");
                 break;
     case 6: printf("sixty");
                 break;
     case 7: printf("seventy");
                 break;
     case 8: printf("eighty");
                 break;
     case 9: printf("ninety");
                 break;
}
 switch(secondDigit){
        case 1: printf("-one");
                break;
        case 2: printf("-two");
                break;
        case 3: printf("-three");
                break;
        case 4: printf("-four");
                break;
        case 5: printf("-five");
                break;
        case 6: printf("-six");
                break;
        case 7: printf("-seven");
                break;
        case 9: printf("-nine");
                break;
 }

    return 0;
}