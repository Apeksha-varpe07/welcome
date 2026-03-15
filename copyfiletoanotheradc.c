#include <stdio.h>

int main() {
    FILE *f1, *f2;
    char ch;

    f1 = fopen("source.txt", "r");
    f2 = fopen("target.txt", "w");

    while((ch = fgetc(f1)) != EOF) {
        fputc(ch, f2);
    }

    printf("File Copied Successfully");

    fclose(f1);
    fclose(f2);

    return 0;
}
