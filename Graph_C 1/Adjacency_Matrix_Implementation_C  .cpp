#include <bits/stdc++.h>
using namespace std;

void print(vector<vector<int>>graph,int v)
{
    for(int a=0;a<v;a++)
    {
        for(int b=0;b<v;b++)
        {
            cout<<graph[a][b]<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int v;
    cout<<"Enter the number of vertexes "<<endl;
    cin>>v;
    cout<<endl;
    vector<vector<int>>graph(v,vector<int>(v,0));
    for(int a=0;a<v;a++)
    {
        int v1,v2;
        cin>>v1>>v2;
        if(v1>=0 &&v1<v && v2>=0&&v2<v)
        {
            graph[v1][v2]=1;
            graph[v2][v1]=1;
        }
    }

    //print graph.
    print(graph,v);
    return 0;
}