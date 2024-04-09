#include <bits/stdc++.h>
using namespace std;
// explanation..
/*
# Intuition
This code implements a flood fill algorithm, a technique used to color pixels in an image. Given a starting pixel and a target color, it fills the connected region of the same color as the starting pixel with the target color.

# Approach
1. The `floodFill` function takes the input image, starting row and column indices, and the target color.
2. It initializes a copy of the input image and variables for dimensions and initial color.
3. It defines the neighbor directions (`nbr_rows` and `nbr_cols`) as offsets to explore neighboring pixels.
4. It calls the `dfs` function to perform depth-first search starting from the given row and column.
5. The `dfs` function recursively explores adjacent pixels of the same initial color and changes them to the target color.

# Complexity
- Time complexity: O(n*m + n*m*4) ~ O(n * m), where n is the number of rows and m is the number of columns in the image. The algorithm traverses each pixel in the worst case.

- Space Complexity: O(n x m) + O(n x m)
O(n x m) for copied input array and recursive stack space takes up n x m locations at max. 



# Code
*/
class Solution {
private:
    // Depth-first search to fill connected pixels
    void dfs(int row, int col, int initial, int color, vector<vector<int>>& matrix,
             int nRow[], int nCol[], int n, int m) {
        if (matrix[row][col] == color) return; // Already filled with target color
        matrix[row][col] = color; // Fill current pixel with target color
        for (int a = 0; a < 4; a++) {
            int n_row = row + nRow[a];
            int n_col = col + nCol[a];
            // Check boundaries and if the neighbor pixel has the initial color
            if (n_row >= 0 && n_row < n && n_col >= 0 && n_col < m && matrix[n_row][n_col] == initial) {
                dfs(n_row, n_col, initial, color, matrix, nRow, nCol, n, m); // Recur for the neighbor
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> ans = image; // Copy the input image
        int n = ans.size(); // Number of rows
        int m = ans[0].size(); // Number of columns
        int initialColor = ans[sr][sc]; // Initial color at starting position
        int nbr_rows[] = {-1, 0, 1, 0}; // Row offsets for neighboring pixels
        int nbr_cols[] = {0, 1, 0, -1}; // Column offsets for neighboring pixels
        // Start DFS from the given starting position
        dfs(sr, sc, initialColor, color, ans, nbr_rows, nbr_cols, n, m);
        return ans; // Return the modified image
    }
};

