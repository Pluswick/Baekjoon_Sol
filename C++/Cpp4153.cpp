#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a, b, c;

    while (true) {
        cin >> a >> b >> c;

        if (a == 0 && b == 0 && c == 0) break;

        // 정렬하여 가장 큰 변이 c가 되도록
        int sides[] = {a, b, c};
        sort(sides, sides + 3);

        // 직각삼각형 판별
        if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2]) {
            cout << "right" << endl;
        } else {
            cout << "wrong" << endl;
        }
    }

    return 0;
}
