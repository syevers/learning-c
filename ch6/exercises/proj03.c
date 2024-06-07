/* Write a program that asks the user to enter a fraction, 
 * then reduces the fraction to lowest terms
*/

#include <stdio.h>

int main(void) {
    //  num1 = m, num2 = n
    int m, n, remainder, numGCD, denomGCD;
    
    printf("Enter two integers: ");
    scanf("%d/%d", &m, &n);

    numGCD=m;
    denomGCD=n;
    do {
        remainder = m%n;
        m = n;
        n = remainder;
        printf("%d\n", remainder);
    }while (n != 0);

    printf("Greatest common divisor: %d\n", m);

    printf("Lowest terms: %d/%d\n", numGCD/m, denomGCD/m);    
    return 0;

}
