#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int left = nums[0];
        for (int a = 0; a < nums.size(); ++a) {
            if (nums[a] >= left)
                left = nums[a];
            cout << left << " ";

            if (left <= 0 && a != nums.size() - 1)
                return false;
            left--;
        }
        return true;
    }
};

int main() {
    cout << "hello";
    return 0;
}