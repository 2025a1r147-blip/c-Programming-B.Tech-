#include <stdio.h>
#include <stdlib.h>

int main() {
    system("clear");   // clears screen (Linux/Mac), use "cls" in Windows

    int r, a, l, b;          // r=radius, a=side of square, l=length, b=breadth
    float area, perimeter;

    // Circle
    printf("Enter the radius of circle = ");
    scanf("%d", &r);
    area = 3.14 * r * r;
    perimeter = 2 * 3.14 * r;
    printf("Area of Circle = %.2f\n", area);
    printf("Perimeter of Circle = %.2f\n\n", perimeter);

    // Square
    printf("Enter the side of square = ");
    scanf("%d", &a);
    area = a * a;
    perimeter = 4 * a;
    printf("Area of Square = %.2f\n", area);
    printf("Perimeter of Square = %.2f\n\n", perimeter);

    // Rectangle
    printf("Enter the length and breadth of rectangle = ");
    scanf("%d %d", &l, &b);
    area = l * b;
    perimeter = 2 * (l + b);
    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f\n", perimeter);

    return 0;
}
