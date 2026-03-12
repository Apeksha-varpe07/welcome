#include <stdio.h>

int main() {
    int num, cube;
    printf("Enter number: ");
    scanf("%d", &num);

    cube = num * num * num;

    printf("Cube = %d", cube);
    return 0;
}
