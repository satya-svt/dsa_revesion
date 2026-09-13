#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n) {
    int ArmSum = 0;
    int original = n;
    int power = to_string(n).length();
    while (n > 0) {
        int lastDigit = (n % 10);
        ArmSum += round(pow(lastDigit, power));
        n = n / 10;
    }
    return ArmSum == original;
}

int main() {
    int n;
    cin >> n;
    if (armstrong(n)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}
