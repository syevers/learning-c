#include <stdio.h>

int main(void) {

    // box dimensions: 12"x10"x8"
    int height, length, width, volume, weight;

    printf("Enter height of the box: ");
    scanf("%d", &height);
    printf("Enter lengh of the box: ");
    scanf("%d", &length);
    printf("Enter the width of the box: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165) / 166;
    
    /*printf("Dimensions: %dx%dx%d\n", length, width, height);*/
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
