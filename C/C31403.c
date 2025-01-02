#include <stdio.h>

int main() {
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    printf("%d\n", A + B - C);

    char strA[5], strB[5];
    sprintf(strA, "%d", A);
    sprintf(strB, "%d", B);
    int concatenated = atoi(strcat(strA, strB));
    printf("%d\n", concatenated - C);

    return 0;
}
