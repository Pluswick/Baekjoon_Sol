#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char str[80];  // 최대 길이가 80인 문자열 저장

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", str);

        int score = 0, consecutive = 0;

        for (int j = 0; j < strlen(str); j++) {
            if (str[j] == 'O') {
                consecutive++;
                score += consecutive;  // 연속 점수 추가
            } else {
                consecutive = 0;  // 연속 점수 초기화
            }
        }

        printf("%d\n", score);
    }

    return 0;
}
