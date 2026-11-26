#include <stdio.h>

                                            // Function using a static storage class variable as a counter
void counterFunction() {
                          // 'static' keyword ensures the variable retains its value between function calls
    static int count = 0;
    count++;
    printf(" -> Function called %d time(s).\n", count);
}
int main() {
    int n, i;

       printf("=========================================\n");
       printf("    STATIC STORAGE CLASS DEMONSTRATION   \n");
      printf("=========================================\n");

                                         // Prompt the user to enter the number of calls with input validation
    printf("Enter how many times you want to call the counter function: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("[Error] Please enter a valid positive integer greater than 0.\n");
        return 1;
    }

        printf("\n-----------------------------------------\n");
        printf(" Executing function calls...\n");
        printf("-----------------------------------------\n");

                                                                 // Call the function 'n' times in a loop
    for (i = 0; i < n; i++) {
        counterFunction();
    }
         printf("-----------------------------------------\n");
         printf(" Summary: Successfully executed %d call(s).\n", n);
         printf("=========================================\n");

    return 0;
}