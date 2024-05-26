/* Write a program that asks the user to enter a two-digit number, then prints the number with 
 * its digits reversed, A session with the program should have the following appearance:
 * Enter a two-digit number: 28 
 * The reversal is: 82 */

#include <stdio.h>

int main(void){
    int num, first_digit, second_digit;
    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    first_digit = num / 10;
    second_digit = num % 10;

    printf("The reversal is %d%d\n",second_digit, first_digit);
    
    return 0;

}
