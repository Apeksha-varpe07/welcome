#include <stdio.h>

int main()
{
    int arr[5], i, largest;

    printf("Enter 5 numbers:\n");

    for(i=0;i<5;i++)
        scanf("%d",&arr[i]);

    largest = arr[0];

    for(i=1;i<5;i++)
    {
        if(arr[i] > largest)
            largest = arr[i];
    }

    printf("Largest Number = %d", largest);

    return 0;
}
