#include <stdio.h>

int main() {
    int a, b, c;

    while (1) {
        scanf("%d %d %d", &a, &b, &c);

        if (a == 0 && b == 0 && c == 0) break;

        // 큰 변이 c가 되도록 정렬
        if (a > b && a > c) { int temp = c; c = a; a = temp; }
        else if (b > a && b > c) { int temp = c; c = b; b = temp; }

        // 직각삼각형 판별
        if (a * a + b * b == c * c) {
            printf("right\n");
        } else {
            printf("wrong\n");
        }
    }

    return 0;
}
