// Program to write into a file and then read and display its content

#include <stdio.h>

int main() {
    FILE *fp;
    char data[100];

    // Writing into file
    fp = fopen("sample.txt", "w");
    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("Enter text to write into file: ");
    gets(data);

    fprintf(fp, "%s", data);
    fclose(fp);

    // Reading from file
    fp = fopen("sample.txt", "r");
    if (fp == NULL) {
        printf("File cannot be opened!");
        return 1;
    }

    printf("\nContent of file:\n");
    while (fgets(data, 100, fp) != NULL) {
        printf("%s", data);
    }

    fclose(fp);

    return 0;
}
