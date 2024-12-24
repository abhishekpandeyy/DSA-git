#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <map>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdio>

using namespace std;

 string frequencySort(string s) {
        string str="";
        vector<pair<int,char>>v;
        map<char,int>mp;
        for(int a=0;a<s.length();a++){
            mp[s[a]]++;
        }
        map<char,int>::iterator itr = mp.begin();
        while(itr!=mp.end()){
            int ch=itr->second;
            char c=itr->first;
            v.push_back(make_pair(ch,c));
            itr++;
        }
      sort(v.begin(), v.end(), greater<pair<int, char>>());
       for(int a=0;a<v.size();a++){
           cout<<v[a].first<<" ";
           int num=v[a].first;
           while(num){
         str+=v[a].second;
         num--;
           }

       }return str;
    }
int main() {
    cout << "hello";
    // find the frequency of characters in decreasing order-451.
    string str;
    cout<<"enter string str : ";
    cin>>str;
    cout<<frequencySort(str)<<endl;
    
    return 0;
}