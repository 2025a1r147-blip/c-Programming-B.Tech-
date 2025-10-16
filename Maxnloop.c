#include <stdio.h>
int main() {
    int n, num, max;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter number 1: ");

    scanf("%d", &num);
    max = num;

    for(int i = 2; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if(num > max)
            max = num;
    }

    printf("Maximum number = %d\n", max);
    return 0;
}
