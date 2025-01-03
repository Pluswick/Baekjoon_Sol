#include <stdio.h>

int main() {
    int num = 0, input;

    for (int i = 0; i < 8; i++) {
        scanf("%d", &input);
        num = num * 10 + input;
    }

    if (num == 12345678) {
        printf("ascending\n");
    } else if (num == 87654321) {
        printf("descending\n");
    } else {
        printf("mixed\n");
    }

    return 0;
}
