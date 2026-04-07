// Program to append content in a given file
#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    fp = fopen("file.txt", "a");

    if (fp == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    printf("Enter content to append: ");
    gets(data);

    fputs(data, fp);

    fclose(fp);

    printf("Content appended successfully.");

    return 0;
}
