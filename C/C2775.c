#include <stdio.h>
int main() {
    int t, k, n;
    scanf("%d", &t);

    while (t--) {
        scanf("%d %d", &k, &n);
        int dp[n];
        for (int i = 0; i < n; i++) dp[i] = i + 1;

        for (int floor = 0; floor < k; floor++) {
            for (int room = 1; room < n; room++) {
                dp[room] += dp[room - 1];
            }
        }
        printf("%d\n", dp[n - 1]);
    }
    return 0;
}
