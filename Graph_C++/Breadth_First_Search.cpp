//  * bfs is just like level order traversal 
// TODO *: given an undirected graph and a source vertex 's', 
// * print BFS from the given source node.

#include <bits/stdc++.h>
using namespace std;

 vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<int>res;
      vector<bool>visited(V,false);
      queue<int>q;
      q.push(0);
      visited[0]=true;
      while(q.empty()==false)
      {
          int u=q.front();
          q.pop();
          res.push_back(u);
          for(auto v:adj[u])
          {
              if(visited[v]==false)
              {
                  visited[v]=true;
                  q.push(v);
              }
          }
      }
      return res;
    }
int main()
{
    int V;
    cout<<"enter the number of vertex :";
    cin>>V;
    vector<int>adj[V];
    for(int a=0;a<V-1;a++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int>ans=bfsOfGraph(V,adj);
    for(int a=0;a<ans.size();a++)
    {
        cout<<ans[a]<<" ";
    }

    return 0;
}