/* Write a program that asks the user to enter a three-digit number, then prints the number with 
 * its digits reversed, A session with the program should have the following appearance:
 * Enter a three-digit number: 283 
 * The reversal is: 382 */

#include <stdio.h>

int main(void){
    int num, first_digit, second_digit, third_digit;
    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    first_digit = num / 100;
    second_digit = num % 100 / 10;
    third_digit= num % 10;

    /*printf("%d\n",first_digit);*/
    /*printf("2nd: %d, 3rd: %d\n",second_digit, third_digit);*/
    printf("The reversal is %d%d%d\n",third_digit,second_digit, first_digit);
    
    return 0;

}
