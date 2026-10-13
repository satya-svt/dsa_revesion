#include <bits/stdc++.h>
using namespace std;

class arrayops {
    public:
        int odd(vector<int>& ves) {
            int count = 0;
            for (auto it : ves) {
                if (it % 2 !=  0) {
                    count++;
                }
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
    arrayops odding;
    cout << odding.odd(ves);
    return 0;
}
