#include <stdio.h>

int main()
{
    int a[5], i, num;

    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
        scanf("%d",&a[i]);

    printf("Enter number to search: ");
    scanf("%d",&num);

    for(i=0;i<5;i++)
    {
        if(a[i]==num)
        {
            printf("Number found at position %d", i+1);
            return 0;
        }
    }

    printf("Number not found");

    return 0;
}
