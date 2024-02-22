#include<bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to print kth largest element for each element in the stream.
    void kthLargest(int arr[], int n, int k)
    {
    	priority_queue<int,vector<int>,greater<int>>pq;
    	for(int a=0;a<n;a++)
    	{
    	   pq.push(arr[a]);
    	   if(pq.size()>k)
    	    pq.pop();
    	   if(pq.size()==k)
    	    cout<<pq.top()<<" ";
    	    else
    	    cout<<-1<<" ";
    	}
    	return;
    }
};


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k, n;
		cin>>k>>n;
	    
	    int arr[n];
	    for(int i = 0; i<n ; ++i)
	        cin>>arr[i];
        Solution ob;
	    ob.kthLargest(arr, n, k);
	    cout<<endl;
	    
	    
	}
	return 0;
}

