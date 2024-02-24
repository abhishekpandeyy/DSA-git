#include <bits/stdc++.h>
using namespace std;


//496. Next Greater Element I

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int>s;
        vector<int>res;
        s.push(-1); unordered_map<int,int>m;
        for(int a=nums2.size()-1;a>=0;a--)
        {
            while(s.size()!=1&&s.top()<=nums2[a])
            {
                s.pop();
            }
            if(s.size()==1)
            m.insert({nums2[a],-1});
            else
            m.insert({nums2[a],s.top()});
            s.push(nums2[a]);
        }
        for(int a=0;a<nums1.size();a++)
        {
          int val=nums1[a];
          if(m.find(val)!=m.end())
          res.push_back(m[val]);
        //   else
        //   res.push_back(-1);
        }
        return res;
        // return {};
    }
};