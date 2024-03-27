#include <stdio.h>
#include <limits.h>

int optimalSearchTree(int keys[], int freq[], int n) {
    int cost[n][n];
    int i,L,r;
    for ( i = 0; i < n; i++)
        cost[i][i] = freq[i];
    
    for ( L = 2; L <= n; L++) {
        for ( i = 0; i <= n - L + 1; i++) {
            int j = i + L - 1;
            cost[i][j] = INT_MAX;

            for ( r = i; r <= j; r++) {
                int c = ((r > i) ? cost[i][r - 1] : 0) +
                        ((r < j) ? cost[r + 1][j] : 0) +
                        freq[r];
                if (c < cost[i][j])
                    cost[i][j] = c;
            }
        }
    }

    return cost[0][n - 1];
}

int main() {
    int keys[] = {10, 12, 20};
    int freq[] = {34, 8, 50};
    int n = sizeof(keys) / sizeof(keys[0]);

    printf("Cost of optimal binary search tree is %d\n", optimalSearchTree(keys, freq, n));
    return 0;
}
