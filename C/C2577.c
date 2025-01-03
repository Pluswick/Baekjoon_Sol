#include <stdio.h>

int main() {
    int a, b, c;
    int count[10] = {0}; // 0~9의 개수를 저장할 배열
    char str[50];        // 결과 문자열을 저장할 배열

    scanf("%d %d %d", &a, &b, &c);

    int result = a * b * c;  // 세 수를 곱함
    sprintf(str, "%d", result); // 결과를 문자열로 변환

    for (int i = 0; str[i] != '\0'; i++) {
        count[str[i] - '0']++; // 각 문자의 숫자 값에 해당하는 인덱스 증가
    }

    for (int i = 0; i < 10; i++) {
        printf("%d\n", count[i]); // 각 숫자의 개수 출력
    }

    return 0;
}
