#include <bits/stdc++.h>
using namespace std;

class arrayops {
    public:
        int sum(vector<int>& ves) {
            int count = 0;
            for (auto it : ves) {
                    count += it;
            }
            return count;
        }
};

int main() {
    int N;
    int temp;
    vector<int> ves;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> temp;
        ves.push_back(temp);
    }
    arrayops summing;
    cout << summing.sum(ves);
    return 0;
}
