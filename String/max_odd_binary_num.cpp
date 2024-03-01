#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string unoptimized(string s)
    {

        string ans = "";
        int count = 0, len = 0;
        for (int a = 0; a < s.length(); a++)
        {
            if (s[a] == '1')
                count++;
            len++;
        }
        int temp = count;
        while (count > 1)
        {
            ans += "1";
            count--;
        }
        len = len - temp;
        while (len > 0)
        {
            ans += "0";
            len--;
        }
        ans += "1";
        return ans;
    }
    string maximumOddBinaryNumber(string s)
    {

        int cnt1 = 0, cnt0 = 0;
        for (auto a : s)
        {
            if (a == '1')
                cnt1++;
            else if (a == '0')
                cnt0++;
        }
        string ans = string(cnt1 - 1, '1') + string(cnt0, '0') + '1';
        return ans;
        //    return unoptimized(s);
    }
};

int main()
{
    cout << "hello";
    return 0;
}