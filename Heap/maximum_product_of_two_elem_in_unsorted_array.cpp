#include <bits/stdc++.h>
using namespace std;

// 1464. Maximum Product of Two Elements in an Array


class Solution {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int>pq;
        for(int a=0;a<nums.size();a++){
            pq.push(nums[a]);        
        }
        int largest=pq.top()-1;
        pq.pop();
        int sec=pq.top()-1;
        return largest*sec;
    }
};