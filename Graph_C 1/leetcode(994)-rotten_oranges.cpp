#include <bits/stdc++.h>
using namespace std;
// explanation...
/*
# Intuition
The given code aims to find the minimum time required for all oranges in a grid to rot. Oranges are represented by integers in a 2D grid, where 0 indicates an empty cell, 1 indicates a fresh orange, and 2 indicates a rotten orange.

# Approach
1. Initialize a queue to perform BFS traversal and a 2D array 'vis' to mark visited cells.
2. Push all rotten oranges into the queue with their coordinates and time as 0, marking them as visited in 'vis'.
3. Perform BFS traversal:
    - For each rotten orange, check adjacent cells (up, down, left, right).
    - If the adjacent cell contains a fresh orange and hasn't been visited:
        - Mark it as visited.
        - Push it into the queue with incremented time.
4. Keep track of the maximum time taken for an orange to rot.
5. After BFS traversal, check if there are any fresh oranges left. If yes, return -1 as it's impossible for them to rot.

# Complexity
- Time complexity: O(n*m), where n is the number of rows and m is the number of columns in the grid. The worst-case scenario involves visiting every cell in the grid once.
- Space complexity: O(n*m) for the 'vis' array and the queue, where n is the number of rows and m is the number of columns.


# Code
*/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans=0;

        int n=grid.size();
        int m=grid[0].size();
        queue<pair<pair<int,int>,int>>q; // Queue for BFS traversal: (coordinates, time)
        int vis[n][m]; // Array to mark visited cells
        
        // Initialize 'vis' array and push rotten oranges into the queue
        for(int a=0;a<n;a++){
            for(int b=0;b<m;b++){
                if(grid[a][b]==2){
                    vis[a][b]=2; // Marking rotten oranges as visited
                    q.push({{a,b},0}); // Pushing coordinates and time (0) into the queue
                }
                else
                    vis[a][b]=0; // Marking other cells as unvisited
            }
        }
        
        // Arrays to define directions for BFS traversal
        int nrow_arr[]={-1,0,1,0};
        int ncol_arr[]={0,1,0,-1};
        
        // BFS traversal
        while(q.empty()==false){
            int row=q.front().first.first;
            int col=q.front().first.second;
            vis[row][col]=2; // Marking current orange as visited
            int t=q.front().second; // Time taken for current orange to rot
            ans=max(t,ans); // Updating maximum time taken
            q.pop(); // Removing current orange from the queue
            
            // Checking adjacent cells
            for(int i=0;i<4;i++){
                int d_row=row+nrow_arr[i];
                int d_col=col+ncol_arr[i];
                // Checking if adjacent cell is within grid boundaries, contains a fresh orange, and hasn't been visited
                if(d_row>=0 && d_row<n && d_col<m && d_col>=0 && grid[d_row][d_col]==1 && vis[d_row][d_col]!=2){
                    vis[d_row][d_col]=2; // Marking adjacent fresh orange as visited
                    q.push({{d_row,d_col},t+1}); // Pushing its coordinates and time (incremented) into the queue
                }
            }
        }
        
        // Checking if there are any fresh oranges left
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<vis[i][j]<<" "; // Debugging: printing visited status of each cell
                if(vis[i][j]==0 && grid[i][j]==1) // If there's a fresh orange left unvisited, return -1
                    return -1;
            }
        }
        return ans; // Returning the maximum time taken for all oranges to rot
    }
};


