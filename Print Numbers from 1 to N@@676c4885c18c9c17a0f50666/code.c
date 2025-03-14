#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" "); // Print space only if it's not the last number
        }
    }

    printf("\n"); // Add a newline for better formatting
    return 0;
}
