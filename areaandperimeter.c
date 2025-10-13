#include <stdio.h>

int main() {
    float P, R, T, SI;

    printf("Enter Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter Rate of Interest (R): ");
    scanf("%f", &R);

    printf("Enter Time in years (T): ");
    scan("%f", &T);
    
    SI = (P * R * T) / 100.00;
    printf("Simple Interest = %.2f\n", SI);

    return 0;
}
