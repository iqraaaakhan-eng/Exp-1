#include <stdio.h>
#include <string.h>

// Define a structure to hold student records
struct student_record {
    char name[50];
    int roll_number;
    float total_marks;
};

int main() {
    struct student_record students[5];
    int i, topper_index = 0;

    printf("=========================================\n");
    printf("         STUDENT TOPPER FINDER           \n");
    printf("=========================================\n");

    printf("Enter details for 5 students:\n");
    
    // Loop to collect details for each student with validation
    for(i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        
        printf(" Enter Name (single word): ");
        if (scanf("%49s", students[i].name) != 1) {
            printf("[Error] Invalid name input.\n");
            return 1;
        }

        printf(" Enter Roll Number        : ");
        if (scanf("%d", &students[i].roll_number) != 1) {
            printf("[Error] Invalid roll number.\n");
            return 1;
        }

        printf(" Enter Total Marks        : ");
        if (scanf("%f", &students[i].total_marks) != 1 || students[i].total_marks < 0) {
            printf("[Error] Invalid marks entered.\n");
            return 1;
        }
    }

    // Find the topper by comparing total marks
    for(i = 1; i < 5; i++) {
        if(students[i].total_marks > students[topper_index].total_marks) {
            topper_index = i;
        }
    }

    // Display the final topper details cleanly
    printf("\n=========================================\n");
    printf("              TOPPER DETAILS             \n");
    printf("=========================================\n");
    printf(" - Name        : %s\n", students[topper_index].name);
    printf(" - Roll Number : %d\n", students[topper_index].roll_number);
    printf(" - Total Marks : %.2f\n", students[topper_index].total_marks);
    printf("=========================================\n");

    return 0;
}