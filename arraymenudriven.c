#include <stdio.h>
int main() 
{
int arr[100], n = 0;
int choice, i, element, pos, found;
do 
{
printf("\n===== MENU =====\n");
printf("1. Insert Element\n");
printf("2. Display Array\n");
printf("3. Search Element\n");
printf("4. Delete Element\n");
printf("5. Exit\n");
printf("Enter your choice: ");
scanf("%d", &choice);
switch (choice) {
case 1: // Insert
printf("Enter element: ");
scanf("%d", &element);
arr[n] = element;
n++;
printf("Element inserted!\n");
break;
case 2: // Display
if (n == 0) {
printf("Array is empty!\n");
}
else 
{
printf("Array elements: ");
for (i = 0; i < n; i++) {
printf("%d ", arr[i]);
}
printf("\n");
}
break;
case 3: // Search
printf("Enter element to search: ");
scanf("%d", &element);
found = 0;
for (i = 0; i < n; i++) {
if (arr[i] == element) 
{
printf("Element found at position %d\n", i + 1);
found = 1;
break;
}
}
if (!found) 
{
printf("Element not found!\n");
}
break;
case 4: // Delete
printf("Enter position to delete (1 to %d): ", n);
scanf("%d", &pos);
if (pos < 1 || pos > n) {
printf("Invalid position!\n");
} 
else 
{
for (i = pos - 1; i < n - 1; i++) {
arr[i] = arr[i + 1];
}
n--;
printf("Element deleted!\n");
}
break;
case 5:
printf("Exiting program...\n");
break;
default:
printf("Invalid choice!\n");
}
} 
while (choice != 5);
return 0;
}
