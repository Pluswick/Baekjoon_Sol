#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int N, K;
    scanf("%d %d", &N, &K);

    int result = factorial(N) / (factorial(K) * factorial(N - K));
    printf("%d\n", result);

    return 0;
}
