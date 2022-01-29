/* ----------------------------------------------------------------------------------- */
/*     Rylan Graham																       */
/* ----------------------------------------------------------------------------------- */

#ifndef EX1_H
#define EX1_H
#include "checkTest.h"
#include <stdio.h>

void daysMonth()
{
    int ticker = 0;
    while (ticker == 0){
    int month;
    printf("Introduce the number of the month: ");
    scanf("%d", &month);

        if (month == 1) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        
        if (month == 2) {
            printf("Number of days: 28\n");
            ticker = ticker + 1;
        }
        if (month == 3) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        if (month == 4) {
            printf("Number of days: 30\n");
            ticker = ticker + 1;
        }
        if (month == 5) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        if (month == 6) {
            printf("Number of days: 30\n");
            ticker = ticker + 1;
        }
        if (month == 7) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        if (month == 8) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        if (month == 9) {
            printf("Number of days: 30\n");
            ticker = ticker + 1;
        }
        if (month == 10) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        if (month == 11) {
            printf("Number of days: 30\n");
            ticker = ticker + 1;
        }
        if (month == 12) {
            printf("Number of days: 31\n");
            ticker = ticker + 1;
        }
        printf("\n");
    }
}

// DO NOT MODIFY THE CODE BELOW!!
// NO MODIFICAR EL CODI DEL TEST!!
// NO MODIFICAR EL CODIGO DEL TEST!!

void testEx1()
{
    printf("Ex 1 - Days of the month\n");
    daysMonth();
}

#endif // EX1_H
