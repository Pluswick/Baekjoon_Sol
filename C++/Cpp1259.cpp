#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    while (true) {
        cin >> num;
        if (num == "0") break;

        string reversed_num = string(num.rbegin(), num.rend());
        if (num == reversed_num)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}
