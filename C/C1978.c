#include <stdio.h>
int is_prime(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return 0;
    return 1;
}
int main() {
    int n, num, count = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &num);
        count += is_prime(num);
    }
    printf("%d\n", count);
    return 0;
}
