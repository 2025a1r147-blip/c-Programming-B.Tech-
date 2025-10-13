#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;
    int i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial of %d = %llu\n", n, fact);

    return 0;
}
