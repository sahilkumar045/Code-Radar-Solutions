#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%d", i);
        if (i < n) {
            printf(" ");
        }
    }
    printf("\n");  // Adding a newline for better output formatting
    return 0;
}
