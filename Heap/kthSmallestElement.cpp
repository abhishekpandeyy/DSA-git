#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to find the kth smallest element in the array.
    int kthSmallest(int arr[], int n, int k)
    {
       priority_queue<int>pq;
       for(int a=0;a<k;a++){
           pq.push(arr[a]);
       }
    //   cout<<pq.size()<<endl;
       for(int b=k;b<n;b++){
           if(arr[b]<pq.top()){
               pq.pop();
               pq.push(arr[b]);
           }
       }
       return pq.top();
    }
    };