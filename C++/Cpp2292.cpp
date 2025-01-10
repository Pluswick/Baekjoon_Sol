#include <iostream>
using namespace std;

int main() {
    int N, layer = 1, range_max = 1;
    cin >> N;

    while (N > range_max) {
        range_max += 6 * layer;
        layer++;
    }

    cout << layer << endl;
    return 0;
}
