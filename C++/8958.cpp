#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string str;
        cin >> str;

        int score = 0, consecutive = 0;

        for (char ch : str) {
            consecutive = (ch == 'O') ? consecutive + 1 : 0;
            score += consecutive;
        }

        cout << score << endl;
    }

    return 0;
}
