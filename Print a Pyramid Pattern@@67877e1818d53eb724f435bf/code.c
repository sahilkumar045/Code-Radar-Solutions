#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int i = 1;
    while (i <= n) { // Loop for rows
        int j = 1;
        while (j <= n - i) { // Loop for spaces
            printf(" ");
            j++;
        }
        
        int k = 1;
        while (k <= (2 * i - 1)) { // Loop for stars
            printf("*");
            k++;
        }

        printf("\n"); // Move to the next line
        i++;
    }

    return 0;
}
