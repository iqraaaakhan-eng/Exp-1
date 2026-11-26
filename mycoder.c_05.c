#include <stdlib.h>

int main() {
    int choice;
    float m1, m2, m3, total, avg;
    char continue_choice;

    main_menu:
    printf("\n");
    printf("\t=======https://www.onlinegdb.com/online_c_compiler#editor_1==================================\n");
    printf("\t      STUDENT RESULT MANAGEMENT SYSTEM   \n");
    printf("\t=========================================\n");
    printf("\t [1] Calculate Total and Average Marks\n");
    printf("\t [2] Determine Student Grade\n");
    printf("\t [3] Check Pass/Fail Result Status\n");
    printf("\t [4] Exit Program\n");
    printf("\t-----------------------------------------\n");
    printf(" Enter your choice (1 to 4): ");

    if (scanf("%d", &choice) != 1) {
        printf("\n[Error] Invalid input! Please enter a valid integer.\n");
        while(getchar() != '\n'); // Clear input buffer
        goto main_menu;
    }

    switch (choice) {
        case 1:
            printf("\n--- [1] Total & Average Calculation ---\n");
            printf("Enter marks for 3 subjects (out of 100): ");
            if (scanf("%f %f %f", &m1, &m2, &m3) != 3) {
                printf("[Error] Please enter valid numbers for marks.\n");
                while(getchar() != '\n');
                break;
            }

            if (m1 < 0 || m1 > 100 || m2 < 0 || m2 > 100 || m3 < 0 || m3 > 100) {
                printf("[Error] Marks must be between 0 and 100.\n");
            } else {
                total = m1 + m2 + m3;
                avg = total / 3.0;
                printf("-----------------------------------------\n");
                printf(" Total Marks   : %.2f / 300\n", total);
                printf(" Average Marks : %.2f%%\n", avg);
                printf("-----------------------------------------\n");
            }
            break;

        case 2:
            printf("\n--- [2] Grade Determination ---\n");
            printf("Enter average percentage: ");
            if (scanf("%f", &avg) != 1) {
                printf("[Error] Invalid percentage input.\n");
                while(getchar() != '\n');
                break;
            }

            if (avg < 0 || avg > 100) {
                printf("[Error] Invalid percentage entered (0 - 100).\n");
            } else {
                printf("-----------------------------------------\n");
                if (avg >= 85) {
                    printf(" Status/Grade : Outstanding\n");
                } else if (avg >= 75) {
                    printf(" Status/Grade : Excellent\n");
                } else if (avg >= 65) {
                    printf(" Status/Grade : Very Good\n");
                } else if (avg >= 55) {
                    printf(" Status/Grade : Good\n");
                } else if (avg >= 40) {
                    printf(" Status/Grade : Pass\n");
                } else {
                    printf(" Status/Grade : Fail\n");
                }
                printf("-----------------------------------------\n");
            }
            break;

        case 3:
            printf("\n--- [3] Pass/Fail Result Status ---\n");
            printf("Enter marks for 3 subjects: ");
            if (scanf("%f %f %f", &m1, &m2, &m3) != 3) {
                printf("[Error] Invalid marks input.\n");
                while(getchar() != '\n');
                break;
            }

            printf("-----------------------------------------\n");
            if (m1 < 40 || m2 < 40 || m3 < 40) {
                printf(" Result: FAIL (Scored below passing mark 40 in one or more subjects)\n");
            } else {
                printf(" Result: PASS\n");
            }
            printf("-----------------------------------------\n");
            break;

        case 4:
            printf("\nExiting the system. Thank you for using our software!\n");
            exit(0);

        default:
            printf("\n[Error] Invalid Choice! Please select an option between 1 and 4.\n");
    }

    printf("\nDo you want to perform another operation? (y/n): ");
    scanf(" %c", &continue_choice);
    if (continue_choice == 'y' || continue_choice == 'Y') {
        goto main_menu;
    }

    printf("\nThank you! Goodbye.\n");
    return 0;
}
