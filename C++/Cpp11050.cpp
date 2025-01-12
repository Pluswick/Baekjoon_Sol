#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int N, K;
    cin >> N >> K;

    int result = factorial(N) / (factorial(K) * factorial(N - K));
    cout << result << endl;

    return 0;
}
