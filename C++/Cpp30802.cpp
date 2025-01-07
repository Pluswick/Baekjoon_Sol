#include <iostream>
using namespace std;
int main() {
    int N, T, P, sizes[6], shirts = 0;
    cin >> N;
    for (int i = 0; i < 6; i++) cin >> sizes[i];
    cin >> T >> P;
    for (int i = 0; i < 6; i++) shirts += (sizes[i] + T - 1) / T;
    cout << shirts << endl << N / P << " " << N % P << endl;
    return 0;
}
