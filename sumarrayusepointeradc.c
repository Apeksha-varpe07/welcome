#include<stdio.h>

int main()
{
    int a[10], i, n, sum=0;
    int *p;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    p = a;

    for(i=0;i<n;i++)
    {
        sum = sum + *(p+i);
    }

    printf("Sum = %d", sum);

    return 0;
}
