#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("sample.txt", "w");

    if(fp == NULL) {
        printf("File cannot be opened\n");
        return 1;
    }

    fprintf(fp, "Hello File Handling");

    fclose(fp);

    fp = fopen("sample.txt", "r");

    printf("File Content:\n");

    while((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
