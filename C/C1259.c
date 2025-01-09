#include <stdio.h>
#include <string.h>

int main() {
    char num[6]; // 최대 5자리 수와 문자열 종료 문자 포함
    while (1) {
        scanf("%s", num);
        if (strcmp(num, "0") == 0) break;

        int len = strlen(num);
        int is_palindrome = 1;
        for (int i = 0; i < len / 2; i++) {
            if (num[i] != num[len - i - 1]) {
                is_palindrome = 0;
                break;
            }
        }
        printf("%s\n", is_palindrome ? "yes" : "no");
    }
    return 0;
}
