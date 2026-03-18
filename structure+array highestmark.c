#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student s[3];
    int i, maxIndex = 0;

    for(i = 0; i < 3; i++) {
        printf("Enter name and marks: ");
        scanf("%s %f", s[i].name, &s[i].marks);
    }

    for(i = 1; i < 3; i++) {
        if(s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    printf("\nTop Student:\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}
