// ** bfs is just like level order traversal
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int V;
    cout << "Enter the number of vertexes :";
    cin >> V;
    vector<vector<int>> graph(V, vector<int>(V, 0));
    for (int a = 0; a < V; a++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        if((v1||v2)<0 && (v1||v2)>V)
        cout<<"Invalid"<<endl;
        break;
    }
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << graph[i][j] << " ";
        }
    }
    cout << endl;
}