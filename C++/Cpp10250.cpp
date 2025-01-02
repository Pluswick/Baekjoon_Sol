#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int H, W, N;
        cin >> H >> W >> N;

        int floor = (N - 1) % H + 1; // 층 번호
        int room = (N - 1) / H + 1; // 방 번호
        cout << floor << (room < 10 ? "0" : "") << room << endl;
    }

    return 0;
}
