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
        int odding(vector<int>& ves) {
            int count = 0;
            for (int it : ves) {
                if (it % 2 != 0) {
                    count++;
                }
            }
                return count;
        }
        bool sort_check(vector<int>& ves) {
            for (auto it : ves) {
                if (ves[it] > ves[it + 1]) return false;
            }
            return true;
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
    arrayops sortCheck;
    sortCheck.sort_check(ves) == 0 ? cout << "True" : cout << "False";
    return 0;
}
