#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int count = 0;

    fp = fopen("student.txt", "r");

    while((ch = fgetc(fp)) != EOF) {
        count++;
    }

    printf("Total characters = %d", count);

    fclose(fp);

    return 0;
}
