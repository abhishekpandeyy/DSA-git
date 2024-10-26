#include <bits/stdc++.h>

using namespace std;

int climbStairs(int n)
{
    if (n <= 2)
        return n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    for (int i = 3; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main()
{
    // Climbing Stairs :> You are climbing a staircase. It takes n steps to reach the top.Each time you can either climb 1 or 2 steps.In how many distinct ways can you climb to the top ?
    int n;
    cin >> n;
    cout << "distinct ways to reach at top is :" << climbStairs(n);
}
