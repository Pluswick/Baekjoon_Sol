#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m, best_sum = 0;
    cin >> n >> m;
    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        cin >> cards[i];
    }

    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                int total = cards[i] + cards[j] + cards[k];
                if (total <= m && total > best_sum) {
                    best_sum = total;
                }
            }
        }
    }

    cout << best_sum << endl;
    return 0;
}
