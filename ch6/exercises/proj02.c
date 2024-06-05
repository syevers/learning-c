/* Write a program that asks the user to enter two integers, 
 * then calculates and displays their greatest common divisor (GCD)
*/

#include <stdio.h>

int main(void) {
    //  num1 = m, num2 = n
    int m, n, remainder;
    
    printf("Enter two integers: ");
    scanf("%d%d", &m, &n);

    do {
        remainder = m%n;
        m = n;
        n = remainder;
        printf("%d\n", remainder);
    }while (n != 0);

    printf("Greatest common divisor: %d\n", m);

    return 0;

}
