// Program to add employee records in binary file and display them
#include <stdio.h>

struct emp {
    int code;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct emp e;
    int n, i;

    // Open file in binary write mode
    fp = fopen("EMP.dat", "wb");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Write records to binary file
    for(i = 0; i < n; i++) {
        printf("\nEnter empcode, name and salary: ");
        scanf("%d %s %f", &e.code, e.name, &e.salary);
        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    // Open file in binary read mode
    fp = fopen("EMP.dat", "rb");

    printf("\nEmployee Records:\n");

    // Read and display records
    while(fread(&e, sizeof(e), 1, fp) == 1) {
        printf("Code: %d\nName: %s\nSalary: %.2f\n\n",
               e.code, e.name, e.salary);
    }

    fclose(fp);

    return 0;
}
