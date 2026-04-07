// Program to demonstrate fseek(), ftell() and rewind()
#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("data.txt", "w+");

    fputs("Hello World", fp);

    fseek(fp, 5, SEEK_SET);

    printf("Current position: %ld\n", ftell(fp));

    ch = fgetc(fp);
    printf("Character at position: %c\n", ch);

    rewind(fp);

    printf("After rewind, position: %ld\n", ftell(fp));

    fclose(fp);

    return 0;
}
