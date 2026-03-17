#include <stdio.h>

struct Student {
    int roll;
    char name[20];
};

int main() {
    struct Student s = {1, "Apeksha"};
    struct Student *ptr;

    ptr = &s;

    printf("Roll = %d\n", ptr->roll);
    printf("Name = %s\n", ptr->name);

    return 0;
}
