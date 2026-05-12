#include <stdio.h>

int main() {
    FILE *fp;
    char name[50];

    fp = fopen("student.txt", "w");

    printf("Enter name: ");
    scanf("%s", name);

    fprintf(fp, "%s", name);

    fclose(fp);

    printf("Data written successfully.");

    return 0;
}
