/* Write a program that prints a one-month calendar. 
 * The user specifies the month and day of the week on which the month begins.
 */

#include <stdio.h>

int main(void){
    int daysInMonth, startingDay;
    printf("Enter number of days in a month: ");
    scanf("%d", &daysInMonth);
    printf("Enter starting day of the week: ");
    scanf("%d", &startingDay);

    for(int j = 1; j <= startingDay; j++){
        printf("   ");
    }

    for(int i=1; i <= daysInMonth; i++) {
        if(i % 6 == 0) {
            printf("\n");
        }
        printf("%3d", i);
    }


        printf("\n");
        return 0;
}
