#include <stdio.h>


void calculateArea(float *r, float *area) {
    float pi = 3.14159;
    *area = pi * (*r) * (*r);
}

int main() {
    float radius, area;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);


    calculateArea(&radius, &area);

    printf("Area of circle = %.2f\n", area);

    return 0;
}
