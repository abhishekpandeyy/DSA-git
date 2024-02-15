//Natural Number Sum using Recursion


#include<iostream>
using namespace std;

int funN(int n,int sum){
    if (n==0)
    return sum;
    sum+=n;
    funN(n-1,sum);
}
int main()
{
    int N;cout<<"enter value of N: ";
    cin>>N;int sum=0;
    cout <<"sum of N natural number : "<<funN(N,sum);
}