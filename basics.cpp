#include <bits/stdc++.h>
using namespace std;

int gcd(int n, int m) {
    while (n > 0 && m > 0) {
        if (n > m) n = n % m;
        else m = m % n;
    }
    if (n == 0) return m;
    return n;
}

int main() {
    int n, m;
    cin >> n;
    cin >> m;
    cout << gcd(n, m);
}
