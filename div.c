#include <stdio.h>

int main() {
    float num1, num2, result;

    // Taking input from user
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Check division by zero
    if (num2 == 0) {
        printf("Error! Division by zero is not allowed.");
    } else {
        result = num1 / num2;
        printf("Division of two numbers = %.2f", result);
    }

    return 0;
}
