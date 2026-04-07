// Program to count characters, spaces, tabs and lines in a file

#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int char_count = 0, space = 0, tab = 0, line = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("File not found");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        char_count++;

        if (ch == ' ')
            space++;
        else if (ch == '\t')
            tab++;
        else if (ch == '\n')
            line++;
    }

    fclose(fp);

    printf("Characters = %d\n", char_count);
    printf("Spaces = %d\n", space);
    printf("Tabs = %d\n", tab);
    printf("Lines = %d\n", line);

    return 0;
}
