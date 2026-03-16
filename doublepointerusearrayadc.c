#include<stdio.h>

int main()
{
    int a[3] = {10,20,30};
    int *p;
    int **q;

    p = a;
    q = &p;

    printf("First element = %d\n", **q);
    printf("Second element = %d\n", *(*q+1));
    printf("Third element = %d\n", *(*q+2));

    return 0;
}
