//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++

struct trip{
    int val;
    int arrPos;
    int idx;
    trip(int v,int aPos,int index){
        val=v;arrPos=aPos;idx=index;
    }
};
struct myComp{
    bool operator()(trip &a,trip &b){
        return a.val>b.val;
    }
};
class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<trip,vector<trip>,myComp>pq; //priority queue->
       for(int a=0;a<arr.size();a++){
           trip t(arr[a][0],a,0);
           pq.push(t);
       } 
       vector<int>res;
       while(!pq.empty()){
           trip min=pq.top();pq.pop();
           res.push_back(min.val);
           if(min.idx+1<arr[min.idx].size()){
               trip t(arr[min.arrPos][min.idx+1],min.arrPos,(min.idx)+1);
               pq.push(t);
           }
       }
       return res;
    }
};




//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}
// } Driver Code Ends