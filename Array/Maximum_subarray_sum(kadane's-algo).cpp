#include <bits/stdc++.h>
using namespace std;

// int main() {
//     vector<int>v={};
//     int N=v.size();
//     int MaxSum=INT_MIN;
//     for(int a=0;a<N;a++) {
//         int sum=0;
//         for(int b=a;b<N;b++) {
//             sum+=v[b];
//             MaxSum=max(MaxSum,sum);
//                 if(sum<0)
//                 break;  
//         }   
//     }
//     cout<<MaxSum<<endl;
//     return 0;
// }

// we can optimze the above approach through kadane's algo.
// we just need to travel from starting and have to traverse to last and need to check is diff bw sum and maxsum.

int main(){
 int maxSum=INT_MIN;
        int sum=0;
        for(int b=0;b<v.size();b++) {
            sum+=v[b];
            maxSum=max(sum,maxSum);
            if(sum<0)
            sum=0;
        }
        return maxSum;
        return 0;
    }