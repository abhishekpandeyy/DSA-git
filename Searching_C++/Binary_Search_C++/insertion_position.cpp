#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int s=0,e=nums.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;

           if(s==e && target<nums[mid] || target==nums[mid])
           return mid;
           else if (s==e && target>nums[mid] )
           return mid+1;
            else if (nums[mid]<target)
            s=mid+1;
            else
            e=mid-1;
        }
        return s;
    }
};

int main() {
    cout << "hello";
    return 0;
}