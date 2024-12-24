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


void fun(int n){
    if (n==0)
    return;
    //  cout<<n<<" "; // N to 1
    fun(n-1);
    // cout<<n<<" "; // 1 to N
}
int main() {
    cout << "hello"<<endl;
    int n;
    cout<<"enter value of n :";
    cin>>n;
    fun(n);
    return 0;
}