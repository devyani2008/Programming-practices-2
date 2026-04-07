// Program to count different characters in a file
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digit = 0, special = 0, vowel = 0;

    fp = fopen("data.txt", "r");

    if (fp == NULL) {
        printf("File not found.");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        if (isupper(ch))
            upper++;
        else if (islower(ch))
            lower++;
        else if (isdigit(ch))
            digit++;
        else if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                 ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
            vowel++;
        else
            special++;
    }

    fclose(fp);

    printf("Uppercase letters: %d\n", upper);
    printf("Lowercase letters: %d\n", lower);
    printf("Digits: %d\n", digit);
    printf("Vowels: %d\n", vowel);
    printf("Special symbols: %d\n", special);

    return 0;
}
