#include <stdio.h>

// Function to generate Fibonacci series up to N terms
void fibonacci(int n) {
    int a = 0, b = 1, next;

    for (int i = 0; i < n; i++) {
        printf("%d ", a);  // Print the current Fibonacci number
        next = a + b;  // Calculate the next term
        a = b;
        b = next;
    }
    printf("\n");  // New line after sequence
}

int main() {
    int n;
    scanf("%d", &n);  // Read the number of terms
    fibonacci(n);  // Call function to print Fibonacci series
    return 0;
}
