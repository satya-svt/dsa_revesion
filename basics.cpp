#include <bits/stdc++.h>
using namespace std;

int digitCount(int n) {
    int Count = 0;
    while (n > 0) {
        Count++;
        n = n / 10;
    }
    return Count;
}

int main() {
    int n;
    cin >> n;
    cout << palindrome(n);
    return 0;
}
