#include <bits/stdc++.h>
using namespace std;

int main() {
    
        int V;
        cout<<"Enter the Number of vertex :";
        cin>>V;
        vector<vector<int>>adjlist(V);
        for(int a=0;a<V;a++)
        {
            int u,v;
            cin>>u>>v;
            if(u>=0 && v>=0 && u<V && v<V){
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
            }
            else 
            cout<<"Invalid Edge "<<endl;
        }
         
         cout<<"Output: "<<endl;
        for(int a=0;a<adjlist.size();++a)
        {   sort(adjlist[a].begin(),adjlist[a].end());
            for(int b=0;b<adjlist[a].size();++b)
            {
                cout<<adjlist[a][b]<<" ";
            }
            cout<<endl;
        }

    return 0;
}