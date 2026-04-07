// Program to write string in greencity.txt and copy in reverse to cleancity.txt
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp1, *fp2;
    char str[100];
    int i, len;

    // Open first file for writing
    fp1 = fopen("greencity.txt", "w");

    printf("Enter a string: ");
    gets(str);

    // Write string into greencity.txt
    fputs(str, fp1);
    fclose(fp1);

    // Open files
    fp1 = fopen("greencity.txt", "r");
    fp2 = fopen("cleancity.txt", "w");

    len = strlen(str);

    // Write reverse string into cleancity.txt
    for(i = len - 1; i >= 0; i--) {
        fputc(str[i], fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("String written and reversed successfully.");

    return 0;
}
