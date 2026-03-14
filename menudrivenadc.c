#include <stdio.h>

int main()
{
    int a,b,choice;

    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    switch(choice)
    {
        case 1: printf("Addition = %d",a+b);
                break;

        case 2: printf("Subtraction = %d",a-b);
                break;

        case 3: printf("Multiplication = %d",a*b);
                break;

        case 4: printf("Division = %d",a/b);
                break;

        default: printf("Invalid choice");
    }

    return 0;
}
