#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    int sum = a + b;

    int difference = a - b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

    return 0;
}
