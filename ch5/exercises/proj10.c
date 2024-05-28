/* Using the switch statement, write a program that converts a numerical grade 
 * into a letter grade */

#include <stdio.h>

int main(void) {
    int num, tens_digit, ones_digit;

    printf("Enter numerical grade: ");
    scanf("%d", &num);
    tens_digit = num /10;
    switch (tens_digit) {
        case 9:
            printf("Your grade is A\n");
            break;
        case 8:
            printf("Your grade is B\n");
            break;
        case 7:
            printf("Your grade is C\n");
            break;
        case 6:
            printf("Your grade is D\n");
            break;
        default:
            printf("Your grade is F\n");
            break;
    }

}
