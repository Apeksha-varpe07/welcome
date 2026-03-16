#include<stdio.h>

struct employee
{
    int id;
    char name[30];
    float salary;
};

int main()
{
    struct employee e;
    struct employee *p;

    p = &e;

    printf("Enter Employee ID: ");
    scanf("%d", &p->id);

    printf("Enter Name: ");
    scanf("%s", p->name);

    printf("Enter Salary: ");
    scanf("%f", &p->salary);

    printf("\nEmployee Details:\n");
    printf("ID = %d\n", p->id);
    printf("Name = %s\n", p->name);
    printf("Salary = %.2f\n", p->salary);

    return 0;
}
