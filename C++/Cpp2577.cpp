#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b, c;
    int count[10] = {0}; // 0~9의 개수를 저장할 배열

    cin >> a >> b >> c;
    int result = a * b * c; // 세 수를 곱함

    string str = to_string(result); // 숫자를 문자열로 변환

    for (char ch : str) {
        count[ch - '0']++; // 각 문자의 숫자 값에 해당하는 인덱스 증가
    }

    for (int i = 0; i < 10; i++) {
        cout << count[i] << endl; // 각 숫자의 개수 출력
    }

    return 0;
}
