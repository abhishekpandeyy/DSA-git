#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string str="";
        for(int a=0;a<s.length();++a)
        {
            if(s[a]=='*')
            st.pop();
            else
            st.push(s[a]);
        }
        while(st.empty()==false)
        {
            str+=st.top();
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;
    }
};