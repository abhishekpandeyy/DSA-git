#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int res = 0;
        sort(tokens.begin(), tokens.end());
        int s = 0, e = tokens.size() - 1;
        while (s <= e) {
            if (tokens[s] <= power) {
                power -= tokens[s];
                res++;
                s++;

            } else if (res > 0 && s != e) {
                res--;
                power += tokens[e];
                e--;

            } else {
                break;
            }
        }
        return res;
    }
};


int main() {
    cout << "hello";
    return 0;
}