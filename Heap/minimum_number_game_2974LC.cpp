#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int>ans;
        priority_queue<int,vector<int>,greater<int>>pq;
        stack<int>s;
        for(int a=0;a<nums.size();a++){
            pq.push(nums[a]);
        } 
        while(pq.empty()==false){
            // s.push(pq.top());
            // pq.pop();
            // if(s.size()==2){
            //     while(!s.empty()){
            //         ans.push_back(s.top());
            //         s.pop();
            //     }
            // }
            int first=pq.top();pq.pop();
            int second=pq.top();pq.pop();
            ans.push_back(second);
            ans.push_back(first);
        }
        return ans;
    }
};