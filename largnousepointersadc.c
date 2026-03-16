#include<stdio.h>

int main()
{
    int a, b, *p, *q;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    p = &a;
    q = &b;

    if(*p > *q)
        printf("Largest = %d", *p);
    else
        printf("Largest = %d", *q);

    return 0;
}
