#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "hello";
    return 0;
}

class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int a=0;a<nums.size();a++){
            int number=nums[a];
            int maxi=0,cnt=0;
            while(number!=0){
                maxi=max(number%10,maxi);
                number/=10;
                cnt++;
            }
            int temp=maxi;
            while(cnt>1){
                temp=temp*10+maxi;
                cnt--;
            }
            sum+=temp;
        }
        return sum;
    }
};