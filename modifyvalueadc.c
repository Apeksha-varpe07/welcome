#include<stdio.h>

void changeValue(int **ptr)
{
    **ptr = 50;
}

int main()
{
    int a = 10;
    int *p;
    
    p = &a;

    changeValue(&p);

    printf("Value of a = %d", a);

    return 0;
}
