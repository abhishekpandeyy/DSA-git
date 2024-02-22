#include <bits/stdc++.h>
using namespace std;


class Solution
{
    public:
    //Function to return kth largest element from an array.
    int KthLargest(int arr[], int n, int k) {
        priority_queue<int>pq;
        for(int a=0;a<n;a++)
        {
            pq.push(arr[a]);
            // if(pq.size()>k)
            //     pq.pop();
        }
        while(k>1)
        {
            pq.pop();
            k--;
        }
    return pq.top();
    }
};


int main() {

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        Solution ob;

        cout << ob.KthLargest(arr, n, k) << endl;
    }

    return 0;
}