#include <stdio.h>

int digit_sum(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        if (digit_sum(i) == N) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    return 0;
}
