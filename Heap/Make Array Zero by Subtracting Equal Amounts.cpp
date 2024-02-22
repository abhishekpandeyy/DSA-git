//2357 leetocde.
#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int a = 0; a < nums.size(); a++) {
            if (nums[a] != 0)
                pq.push(nums[a]);
        }
        int tobeSub = 0, count = 0;
        while (pq.empty() == false) {
            if (pq.top() - tobeSub > 0) {
                cout << pq.top() << " sub:" << tobeSub << endl;
                tobeSub += pq.top() - tobeSub;
                count++;
            }
            pq.pop();
        }
        return count;

        //  set<int>s;
        //     for(int a=0;a<nums.size();a++){
        //         if(nums[a]!=0)
        //         s.insert(nums[a]);
        // }
        // return s.size() ;
    }
};