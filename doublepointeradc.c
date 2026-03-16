#include<stdio.h>

int main()
{
    int a = 10;
    int *p;
    int **q;

    p = &a;     
    q = &p;     

    printf("Value of a = %d\n", a);
    printf("Value using pointer = %d\n", *p);
    printf("Value using double pointer = %d\n", **q);

    return 0;
}
