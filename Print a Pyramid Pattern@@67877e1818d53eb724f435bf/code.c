#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) { // Rows
        for (int j = 1; j <= n - i; j++) { // Spaces
            printf(" ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) { // Stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
