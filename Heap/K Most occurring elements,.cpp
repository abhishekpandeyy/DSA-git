#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
// Function to print the k numbers with most occurrences 

class Solution
{
    public:
    //Function to return the sum of frequencies of k numbers
    //with most occurrences in an array.
    int kMostFrequent(int arr[], int n, int k) 
    { 
    	unordered_map<int ,int >mp;
    	for(int a=0;a<n;a++)
    	{
    	    mp[arr[a]]++;
    	}
    	int res=0;
    	priority_queue<pair<int,int>>pq;
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
    	   //pair<int,int>p;
    	   //p.first=itr.second;
    	   //p.second=itr.first;
    	   pq.push({itr->second,itr->first});
    	}
    	while(k-- && pq.empty()==false){
    	    res+=pq.top().first;
    	    pq.pop();
    	}
    	return res;
    } 
};

int main() 
{
	int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        cin >> k;
        Solution ob;
        cout << ob.kMostFrequent(arr, n, k) << endl; 
    }

	return 0; 
} 
