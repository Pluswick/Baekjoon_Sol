#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    int n, max_score = 0;
    cin >> n;
    vector<int> scores(n);
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
        if (scores[i] > max_score) max_score = scores[i];
    }

    for (int i = 0; i < n; i++) {
        sum += (double)scores[i] / max_score * 100;
    }

    cout << fixed << setprecision(6) << sum / n << endl;
    return 0;
}
