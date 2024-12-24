#include <bits/stdc++.h>
using namespace std;


    bool search(vector<int>& nums, int target) {
        // sort(nums.begin(),nums.end());
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target)
                return true;
            if(nums[mid]==nums[s]&&nums[mid]==nums[e])
            {
                s++;e--;
            }
            else if(nums[s]<=nums[mid])
            {
                if(nums[s]<=target && nums[mid]>target) {
                    e=mid-1;
                }
                else
                s=mid+1;
            } else {
                if(nums[e]>=target && nums[mid]<target) {
                    s=mid+1;
                }
                else
                e=mid-1;
            }
        }
        return false;
    }


int main() {
    vector<int>v={2,4,6,0,1,2};
    cout<<search(v,1)<<endl;
    return 0;
}