#include <stdio.h>

int main() {
    float a, b, c;
    float add, sub, mul, div;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    add = a + b + c;
    sub = a - b - c;
    mul = a * b * c;
    div = a / b / c;

    printf("Addition = %f\n", add);
    printf("Subtraction = %f\n", sub);
    printf("Multiplication = %f\n", mul);
    printf("Division = %f\n", div);

    return 0;
}
