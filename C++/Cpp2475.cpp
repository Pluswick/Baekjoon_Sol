#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> a;
        sum += a * a;
    }
    cout << sum % 10 << endl;
    return 0;
}