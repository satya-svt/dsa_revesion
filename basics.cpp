#include <bits/stdc++.h>
using namespace std;

void printDivs(int n) {
    vector<int> div;
    for (int i = 0; i * i <= n; i++) {
        if (n % i == 0) {
            div.emplace_back(i);
        if (n/i != i) {
            div.emplace_back((n / i));
            }
        }
    }
    sort(div.begin(), div.end());
    for (auto it : div) {
        cout << it << " ";
    }
}

int main() {
    int n;
    cin >> n;
    printDivs(n);
    return 0;
}
