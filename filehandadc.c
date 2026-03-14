#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");

    printf("Enter text: ");
    gets(text);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Data written to file successfully.");

    return 0;
}
