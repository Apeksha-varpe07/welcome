#include<stdio.h>

struct student
{
    int roll;
    char name[30];
    float marks;
};

int main()
{
    struct student s;
    struct student *p;

    p = &s;

    printf("Enter Roll Number: ");
    scanf("%d", &p->roll);

    printf("Enter Name: ");
    scanf("%s", p->name);

    printf("Enter Marks: ");
    scanf("%f", &p->marks);

    printf("\nStudent Details:\n");
    printf("Roll Number = %d\n", p->roll);
    printf("Name = %s\n", p->name);
    printf("Marks = %.2f\n", p->marks);

    return 0;
}
