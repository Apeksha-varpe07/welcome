#include <stdio.h>

int main() {
    int a, b, c, mul;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    mul = a * b * c;

    printf("Multiplication = %d", mul);

    return 0;
}
