#include <bits/stdc++.h>
using namespace std;

long long minCost(long long arr[], long long n) {
       priority_queue <long long, vector<long long> ,greater<long long>>pq;
       for(int a=0;a<n;a++){
           pq.push(arr[a]);
       }
     long long res=0;
       while(pq.size()>1){
         long long cost1=pq.top();
          pq.pop();
          long long cost2=pq.top();
          pq.pop();
          res+=(cost1+cost2);
          pq.push(cost1+cost2);
       }
       return res;
    }