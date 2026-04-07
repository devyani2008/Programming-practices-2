// Program to find size of file using fseek() and ftell()
#include <stdio.h>

int main() {
    FILE *fp;
    long size;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found.");
        return 1;
    }

    // Move pointer to end of file
    fseek(fp, 0, SEEK_END);

    // Get current position (file size)
    size = ftell(fp);

    fclose(fp);

    printf("Size of file = %ld bytes", size);

    return 0;
}
