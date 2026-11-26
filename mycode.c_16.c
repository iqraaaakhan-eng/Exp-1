#include <stdio.h>

int main() {
    FILE *file;
    int emp_id, n, i, count = 0;
    char name[50];
    float salary;

    printf("=========================================\n");
    printf("        EMPLOYEE DATABASE SYSTEM         \n");
    printf("=========================================\n");

    printf("Enter number of employees: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("[Error] Enter a valid positive number.\n");
        return 1;
    }
                                                 // Open file for writing and verify it succeeded
    file = fopen("employee.txt", "w");
    if (file == NULL) {
        printf("[Error] Could not create employee.txt.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\n--- Employee %d ---\n", i + 1);
        printf(" Enter ID, Name, Salary: ");
        if (scanf("%d %49s %f", &emp_id, name, &salary) != 3) {
            printf("[Error] Invalid input format.\n");
            fclose(file);
            return 1;
        }
        fprintf(file, "%d %s %.2f\n", emp_id, name, salary);
    }
    fclose(file);
                                                                    // Reopen file for reading
    file = fopen("employee.txt", "r");
    if (file == NULL) {
        printf("[Error] Could not open employee.txt for reading.\n");
        return 1;
    }

    printf("\n=========================================\n");
    printf("      STORED EMPLOYEE RECORDS            \n");
    printf("=========================================\n");
    printf(" %-6s | %-15s | %-10s\n", "ID", "Name", "Salary");
    printf("-----------------------------------------\n");

    while (fscanf(file, "%d %49s %f", &emp_id, name, &salary) == 3) {
        printf(" %-6d | %-15s | %-10.2f\n", emp_id, name, salary);
        count++;
    }

    printf("-----------------------------------------\n");
    printf(" Total Records Loaded: %d\n", count);
    printf("=========================================\n");

    fclose(file);
    return 0;
}