#include <stdio.h>

// Function to compute player's ranks
void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int ranks[200000]; // Array to store dense ranks
    int rank = 1;
    
    // Assigning dense ranks to the leaderboard scores
    ranks[0] = rank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            ranks[i] = rank; // Same rank for duplicate scores
        } else {
            ranks[i] = ++rank; // Increase rank for new scores
        }
    }

    // Finding ranks for player scores using binary search
    int index = n - 1; // Start from the last rank in leaderboard
    for (int i = 0; i < m; i++) {
        while (index >= 0 && player[i] >= ranked[index]) {
            index--; // Move up the leaderboard if score is higher
        }
        result[i] = index == -1 ? 1 : ranks[index] + 1; // Assign rank
    }
}

int main() {
    int n, m;
    scanf("%d", &n);
    
    int ranked[200000];
    for (int i = 0; i < n; i++) scanf("%d", &ranked[i]);

    scanf("%d", &m);
    int player[200000];
    for (int i = 0; i < m; i++) scanf("%d", &player[i]);

    int result[200000];

    // Compute ranks
    trackPlayerRanks(ranked, n, player, m, result);

    // Print results
    for (int i = 0; i < m; i++) {
        printf("%d\n", result[i]);
    }

    return 0;
}
