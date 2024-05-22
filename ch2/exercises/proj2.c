/* Write a program that computes the volume of a sphere with a 10-meter radius
 * using the formula v = 4/3pi(r^3). 
 * Write the fraction 4/3 as 4.0f/3.0f
 * (Try writing it as 4/3. What happens?) 
 * Hint: C doesn't have an exponentiation operator, 
 * so you'll need to multiply r by itself twice to compute R^3. */


#include <stdio.h>
#define R 10
#define PI 3.14159265f
int main(void){
    int R3 = R * R * R;
    float formula = 4.0f/3.0f * PI * R3;
    printf("The volume of a sphere is %.2f\n", formula);
    return 0;
}

