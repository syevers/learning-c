/* Write a program that finds the largest in a series of numbers entered by the user.
 * The program must prompt the user to enter numbers one by one. When the user enters
 * 0 or a negative number, the program must display the largest nonnegative number entered.
*/


#include <stdio.h>

int main(void){
    int num, biggestNum;

    printf("Enter a number: ");
    scanf("%d", &num);
    biggestNum = num;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > biggestNum) {
            biggestNum = num;
        }
    } while (num > 0);


    /*while (num > 0) {*/
    /*printf("Enter a number: ");*/
    /*scanf("%d", &num);*/
    /*if (num > biggestNum) {*/
    /*    biggestNum = num;*/
    /*    continue;*/
    /*}}*/


    printf("The largest number entered was %d\n", biggestNum);

}
