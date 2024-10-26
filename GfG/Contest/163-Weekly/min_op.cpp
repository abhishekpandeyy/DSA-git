#include <iostream>

using namespace std;

int min_swap(string s)
{
    int e = 0, o = 0, vei = 0, voi = 0;
    for (int a = 0; a < s.size(); a++)
    {
        if (a % 2 != 0) // odd index..
        {
            if (s[a] == '1')
            {
                o++;
            }
            else
            {
                voi++;
            }
        }
        else
        {
            if (s[a] == '1')
            {
                e++;
            }
            else
                vei++;
        }
    }
    int diff = abs(e - o);
    if (diff % 2)
        return -1;

    if (e == o || (e > o && voi >= diff / 2) || (o > e && vei >= diff / 2))
    {
        // cout << e << o << endl;
        return diff / 2;
    }
    return -1;
}
int main()
{
    string s;
    cout << "enter the string :";
    cin >> s;
    int res = min_swap(s);
    cout << "min no. of swap is :" << res;
    return 0;
}
