#include <stdio.h>

int main() {
    int total = 0;
    int i = 1;

    while (i <= 10) {
        total += i;
        i++;
    }

    printf("Sum of first 10 numbers: %d\n", total);
    return 0;
}
