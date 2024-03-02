#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int a=0;a<nums.size();a++)
        {
            nums[a]=nums[a]*nums[a];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
int main() {
    // cout << "hello";
    return 0;
}