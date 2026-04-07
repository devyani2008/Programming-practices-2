// Program to add employee records and find highest salary
#include <stdio.h>

struct emp {
    int code;
    char name[50];
    float salary;
};

int main() {
    FILE *fp;
    struct emp e, max;
    int n, i;

    // Open file for writing
    fp = fopen("EMP.txt", "w");

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Input employee records
    for(i = 0; i < n; i++) {
        printf("\nEnter empcode, name and salary: ");
        scanf("%d %s %f", &e.code, e.name, &e.salary);
        fprintf(fp, "%d %s %.2f\n", e.code, e.name, e.salary);
    }

    fclose(fp);

    // Open file for reading
    fp = fopen("EMP.txt", "r");

    // Read first record
    fscanf(fp, "%d %s %f", &max.code, max.name, &max.salary);

    // Compare with remaining records
    while(fscanf(fp, "%d %s %f", &e.code, e.name, &e.salary) != EOF) {
        if(e.salary > max.salary) {
            max = e;
        }
    }

    fclose(fp);

    // Display highest salary employee
    printf("\nEmployee with highest salary:\n");
    printf("Code: %d\nName: %s\nSalary: %.2f", max.code, max.name, max.salary);

    return 0;
}
