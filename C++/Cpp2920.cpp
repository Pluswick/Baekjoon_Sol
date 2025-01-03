#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr(8), sorted;
    for (int i = 0; i < 8; i++) cin >> arr[i];
    sorted = arr;

    sort(sorted.begin(), sorted.end());
    if (arr == sorted) {
        cout << "ascending\n";
    } else {
        reverse(sorted.begin(), sorted.end());
        if (arr == sorted) {
            cout << "descending\n";
        } else {
            cout << "mixed\n";
        }
    }
    return 0;
}
