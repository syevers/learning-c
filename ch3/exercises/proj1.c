/* Write a program that accepts a date ftom the user in the form mm/dd/yyyy 
 * and then displays it in the form yyyymmdd: */

#include <stdio.h>

int main(void){
    int day, month,year;

    printf("Enter a date: (mm/dd/yyyy): ");
    scanf(" %d/%d/%d", &day, &month, &year);
    printf("You entered %d%.2d%d\n", year,day,month);
     
    return 0;
}
