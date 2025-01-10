#include <stdio.h>

int main() {
    int N, layer = 1, range_max = 1;
    scanf("%d", &N);

    while (N > range_max) {
        range_max += 6 * layer;
        layer++;
    }

    printf("%d\n", layer);
    return 0;
}
