#include <stdio.h>

int main() {
    int num1, num2, num3, result;

    // Taking input from user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Multiplication
    result = num1 * num2 * num3;

    // Display result
    printf("Multiplication of three numbers = %d", result);

    return 0;
}
