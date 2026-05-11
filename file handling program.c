#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    fp = fopen("data.txt", "w");

    printf("Enter text: ");
    gets(text);

    fprintf(fp, "%s", text);

    fclose(fp);

    fp = fopen("data.txt", "r");

    fgets(text, 100, fp);

    printf("File Content: %s", text);

    fclose(fp);

    return 0;
}
