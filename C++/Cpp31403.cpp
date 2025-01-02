#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int C;
    cin >> A >> B >> C;
    cout << stoi(A) + stoi(B) - C << endl;
    cout << stoi(A + B) - C << endl;
    return 0;
}
