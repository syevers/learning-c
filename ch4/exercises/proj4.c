/* Write a program that reads an integer entered by the user
 * and displays it in octal (base 8) */

#include <stdio.h>

int main(void) {
    int number,octal_num, remainder;
    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &number);
    
    octal_num = number / 8;
    remainder = number % 8;


    int second_to_last = octal_num % 8;

    int middle = second_to_last / 8;
    middle = middle % 8;

    printf("%d, %d, %d, %d\n", octal_num, remainder, second_to_last, middle);


    /*printf("%5d", octal_num);*/
}
