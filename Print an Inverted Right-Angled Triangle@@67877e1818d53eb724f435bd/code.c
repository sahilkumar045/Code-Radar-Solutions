#include <stdio.h>

int main() {
    int n;

    // Taking input from the user
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Validate input (must be positive)
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Exit with error code
    }

    // Outer loop for rows
    for (int i = n; i >= 1; i--) {  
        // Inner loop for printing stars
        for (int j = 1; j <= i; j++) {  
            printf("* ");
        }
        printf("\n"); // Move to the next line after printing stars in a row
    }

    return 0;
}
