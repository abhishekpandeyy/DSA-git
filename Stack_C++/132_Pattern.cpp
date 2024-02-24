#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack<int>s;
        int l=INT_MIN;//nums[k]
        //in stack we are storing largest val.
        for(int a=nums.size()-1;a>=0;a--)
        {
            if(nums[a]<l)
             return true;
             while(!s.empty() && s.top()<nums[a])
             {
                 l=s.top();
                 s.pop();
             }
            
               s.push(nums[a]);
        }
        return false;
    }
};