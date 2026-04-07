// Program to write a number in one file and store its reverse in another file
#include <stdio.h>

int main() {
    FILE *fp1, *fp2;
    int num, rev = 0, rem;

    // Open file to write number
    fp1 = fopen("num.txt", "w");

    printf("Enter a number: ");
    scanf("%d", &num);

    fprintf(fp1, "%d", num);
    fclose(fp1);

    // Reverse the number
    while(num != 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    // Write reverse number into another file
    fp2 = fopen("rev.txt", "w");
    fprintf(fp2, "%d", rev);
    fclose(fp2);

    printf("Reverse number stored successfully.");

    return 0;
}
