#define _CRT_SECURE_NO_WARNINGS
/*#include <stdio.h>
int main(void)
{
    int n, num, min = 1000000, max = -1000000;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &num);
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("%d %d", min, max);

    return 0;
} No.10818*/

/*#include <stdio.h>
int main() {
    int a = 0, num[9], index;
    for (int i = 0; i < 9; i++) {
        scanf("%d", &num[i]);
        if (a < num[i]) {
            a = num[i];
            index = i + 1;
        }
    }
    printf("%d\n%d", a, index);
} No.2562*/