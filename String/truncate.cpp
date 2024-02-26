#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string truncateSentence(string s, int k) {
        string res="";
        string word="";
        int i=0;
        for(int a=0;a<s.length();a++)
        {
            if(s[a]==' ' && word!="")
            {
                // word+=" ";
                res+=word;
                word="";
                i++;
            }
            if(i==k)
            break;
            else
            {
                word+=s[a];
            }
        }
        return res+word;
    }
};