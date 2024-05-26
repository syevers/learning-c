/*Rewrite the program in Programming Project 2,
 * so that it prints the reversal of a three-digit number without using arithmetic
 * to split the number into digits */


#include <stdio.h>

int main(void) {
    int  i1, i2, i3;
    printf("Enter three-digits: ");
    scanf("%1d%1d%1d", &i1, &i2, &i3);
    printf("The numbers reversed: %d%d%d\n", i3,i2,i1);
}
