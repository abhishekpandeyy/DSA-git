#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <cstdio>

using namespace std;
void f(vector<int>v,int temp){
    if(v.empty() && temp<v[v.size()-1])
 {   v.push_back(temp);
     return;
     
}
}
void sortIt(int n,vector<int>&v){
    if(n==1)
    return;
    int temp=v[v.size()-1];
    v.pop_back();
    sortIt(n-1,v);
    f(v,temp);
    return ;
}
int main() {
    cout << "hello";
    int n; vector<int>arr;
    cout<<"Enter the length of array: ";
    cin>>n;
    for(int a=0;a<n;a++)
    {
        cin>>arr[a];
    }
    sortIt(n,arr);
    return 0;
}