#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length = 0;

    printf("=========================================\n");
    printf("        STRING LENGTH CALCULATOR         \n");
    printf("=========================================\n");

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("[Error] Failed to read input.\n");
        return 1;
    }
                                             // Remove trailing newline character left by fgets if present
    str[strcspn(str, "\n")] = '\0';
                                                                     // Iterate until null terminator '\0'
    while (str[length] != '\0') {
        length++;
    }
    printf("\n-----------------------------------------\n");
    printf(" - String Length: %d characters\n", length);
    printf("========================================-\n");

    return 0;
}
