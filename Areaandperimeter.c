#include <stdio.h>
#define PI 3.14

int main() {
    float r, l, b, s;

    // Circle
    printf("Enter radius of circle: ");
    scanf("%f", &r);
    printf("Area of circle = %.2f\n", PI * r * r);
    printf("Perimeter of circle = %.2f\n", 2 * PI * r);

    // Rectangle
    printf("\nEnter length and breadth of rectangle: ");
    scanf("%f %f", &l, &b);
    printf("Area of rectangle = %.2f\n", l * b);
    printf("Perimeter of rectangle = %.2f\n", 2 * (l + b));

    // Square
    printf("\nEnter side of square: ");
    scanf("%f", &s);
    printf("Area of square = %.2f\n", s * s);
    printf("Perimeter of square = %.2f\n", 4 * s);

    return 0;
}
