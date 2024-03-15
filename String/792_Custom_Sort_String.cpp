#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "hello";
    return 0;
}

class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int> m;
        string res = "";
        for (int a = 0; a < s.size(); a++) {
            m[s[a]]++;
        }
        for (int a = 0; a < order.size(); a++) {
            if (m.find(order[a]) != m.end()) {
                while (m[order[a]] > 0) {
                    res += order[a];
                    m[order[a]]--;
                }
            }
        }
        for (auto x : m) {
            // while (x.second > 0) {
                cout << x.first << " ";
                res += x.first;
            //     x.second--;
            // }
        }
        return res;
    }
};