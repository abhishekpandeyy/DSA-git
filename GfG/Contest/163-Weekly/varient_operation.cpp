//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    int countUniques(vector<int> a, int k, int l, int r)
    {
        // code here

        // max to max k operation && l-x-r swap any value with x

        unordered_map<int, int> _map;
        for (auto e : a)
        {
            _map[e]++;
        }
        while (l <= r && k > 0)
        {
            if (_map.size() == a.size())
                break;
            if (_map.find(l) == _map.end())
            {
                k--;
                _map[l]++;
            }
            l++;
        }
        return _map.size();
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l, r;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        cin >> k >> l >> r;
        Solution ob;
        cout << ob.countUniques(a, k, l, r) << endl;
    }
    return 0;
}
// } Driver Code Ends