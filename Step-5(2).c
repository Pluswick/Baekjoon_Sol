#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*int main() {
    int a, b, c;
    int arr[10] = { 0, };
    scanf("%d %d %d", &a, &b, &c);
    int n = a * b * c;

    int num;
    while (n > 0) {
        num = n % 10;
        arr[num]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
} No.2577*/

/*int main(void) {
    int result = 0;
    int arr[10];
    for (int i = 0; i < 10; i++) {
        int num;
        scanf("%d", &num);
        int result = num % 42;
        arr[i] = result;
    }
    for (int j = 0; j < 10; j++) {
        int count=0;
        for (int k = 0; k < j; k++) {
            if (arr[j] == arr[k]) {
                count++;
            }
        }
        if (count == 0)
            result++;
    }
    printf("%d", result);

    return 0;
} No.3052*/