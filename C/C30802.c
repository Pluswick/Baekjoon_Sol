#include <stdio.h>
int main() {
    int N, T, P, sizes[6], shirts = 0;
    scanf("%d", &N);
    for (int i = 0; i < 6; i++) scanf("%d", &sizes[i]);
    scanf("%d %d", &T, &P);
    for (int i = 0; i < 6; i++) shirts += (sizes[i] + T - 1) / T;
    printf("%d\n%d %d\n", shirts, N / P, N % P);
    return 0;
}
