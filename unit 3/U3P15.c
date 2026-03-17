#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    strcpy(str2, str1);

    printf("%s\n", str2);

    return 0;
}
