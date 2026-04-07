// Program to write 1 to 10 in DATA.txt and separate into ODD.txt and EVEN.txt
#include <stdio.h>

int main() {
    FILE *fp, *fodd, *feven;
    int i, num;

    // Write numbers 1 to 10 in DATA.txt
    fp = fopen("DATA.txt", "w");

    for(i = 1; i <= 10; i++) {
        fprintf(fp, "%d ", i);
    }
    fclose(fp);

    // Open files
    fp = fopen("DATA.txt", "r");
    fodd = fopen("ODD.txt", "w");
    feven = fopen("EVEN.txt", "w");

    // Read numbers and separate
    while(fscanf(fp, "%d", &num) != EOF) {
        if(num % 2 == 0)
            fprintf(feven, "%d ", num);
        else
            fprintf(fodd, "%d ", num);
    }

    fclose(fp);
    fclose(fodd);
    fclose(feven);

    printf("Numbers separated into ODD.txt and EVEN.txt successfully.");

    return 0;
}
