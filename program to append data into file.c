#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("student.txt", "a");

    printf("Enter text: ");
    scanf("%s", text);

    fprintf(fp, "%s", text);

    fclose(fp);

    printf("Data appended successfully.");

    return 0;
}
