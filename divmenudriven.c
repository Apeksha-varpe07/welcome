#include <stdio.h>
int main() 
{
int choice;
float num1, num2, result;
do 
{
printf("\n===== MENU =====\n");
printf("1. division\n");
printf("2. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
if (choice >= 1 && choice <= 4) {
printf("Enter two numbers: ");
scanf("%f %f", &num1, &num2);
}
switch (choice) 
{
case 1:
if (num2 != 0)
printf("Result = %.2f\n", num1 / num2);
else
printf("Error! Division by zero.\n");
break;
case 2:
printf("Exiting program...\n");
break;
default:
printf("Invalid choice! Try again.\n");
}
} 
while (choice != 2);
return 0;
}
