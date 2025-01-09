#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);

    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }

    printf("%d\n", count);
    return 0;
}
