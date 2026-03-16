#include<stdio.h>

int main()
{
    int a[5], i;
    int *p;

    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++)
        scanf("%d", &a[i]);

    p = a;

    printf("Array elements are:\n");
    for(i=0;i<5;i++)
        printf("%d ", *(p+i));

    return 0;
}
