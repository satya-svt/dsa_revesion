#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    int count = 0;
    for (int i = 0; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
        if (n/i != i) {
            count++;
            }
        }
    }
    return count == 2;
}

int main() {
    int n;
    cin >> n;
    if (prime(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
