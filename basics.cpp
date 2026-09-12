#include <bits/stdc++.h>
using namespace std;

bool palindrome(int n) {
    int revnum = 0;
    int original = n;
    while (n > 0) {
        int lastDigit = n % 10;
        n = n / 10;
        revnum = (revnum*10) + lastDigit;
    }
    return revnum == original;
}

int main() {
    int n;
    cin >> n;
    if (palindrome(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
