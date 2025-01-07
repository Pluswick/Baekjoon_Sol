#include <iostream>
using namespace std;
bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) if (num % i == 0) return false;
    return true;
}
int main() {
    int n, num, count = 0;
    cin >> n;
    while (n--) {
        cin >> num;
        if (is_prime(num)) count++;
    }
    cout << count << endl;
    return 0;
}
