#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("student.txt", "r");

    fscanf(fp, "%s", data);

    printf("Data from file: %s", data);

    fclose(fp);

    return 0;
}
