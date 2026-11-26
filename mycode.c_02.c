#include <stdio.h>

int main()
{
    float physics, chemistry, maths, total, average;

    printf("========================================\n");
    printf("           ADMISSION ELIGIBILITY        \n");
    printf("========================================\n");

    // Reading PCM marks with aligned colons
    printf("Enter marks for Physics     : ");
    scanf("%f", &physics);
    printf("Enter marks for Chemistry   : ");
    scanf("%f", &chemistry);
    printf("Enter marks for Mathematics : ");
    scanf("%f", &maths);

    // Calculations
    total = physics + chemistry + maths;
    average = total / 3.0;

    // Formatted Scorecard Output
    printf("\n----------------------------------------\n");
    printf("               SUMMARY                  \n");
    printf("----------------------------------------\n");
    printf("PCM Total     : %.2f / 300\n", total);
    printf("Average Marks : %.2f%%\n", average);
    printf("Remark        : %s\n", (average >= 75) ? "Distinction" : (average >= 50) ? "Pass" : "Fail");
    printf("Status        : %s\n", (average >= 50) ? "ELIGIBLE for Admission" : "NOT ELIGIBLE for Admission");
    printf("----------------------------------------\n");

    return 0;
}