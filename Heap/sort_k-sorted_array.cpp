#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdio>

using namespace std;

// class 
class Solution
{ public:
    //Function to return the sorted array.
    vector <int> nearlySorted(int arr[], int num, int K){
        vector<int>ans;
       priority_queue<int,vector<int>,greater<int>> pq;
       for(int a=0;a<=K;a++){
           pq.push(arr[a]);
       }
    //   int index=0;
       for(int b=K+1;b<num;b++){
        //   arr[index++]=pq.top();
        ans.push_back(pq.top());
           pq.pop();
           pq.push(arr[b]);
       }
       while(!pq.empty())
       {
           ans.push_back(pq.top());
           pq.pop();
       }
       return ans;
    }
};