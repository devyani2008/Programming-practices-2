// Program to replace all 'a' with 'x' in a file
#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    char ch;

    fp1 = fopen("data.txt", "r");
    fp2 = fopen("new.txt", "w");

    if (fp1 == NULL || fp2 == NULL) {
        printf("File cannot be opened.");
        return 1;
    }

    while ((ch = fgetc(fp1)) != EOF) {
        if (ch == 'a')
            fputc('x', fp2);
        else
            fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("Replacement done successfully.");

    return 0;
}
