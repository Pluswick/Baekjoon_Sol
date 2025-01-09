#include <iostream>
using namespace std;

int digit_sum(int n) {
    int sum = n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (digit_sum(i) == N) {
            cout << i << endl;
            return 0;
        }
    }
    cout << 0 << endl;
    return 0;
}
