#include <stdio.h>

int main() {
    int a = 0;
    int sum = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &a);
        sum += a * a; // 직접 제곱 계산
    }

    printf("%d\n", sum % 10); // 나머지 계산
    return 0;
}