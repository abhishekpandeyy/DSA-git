#include <bits/stdc++.h>
using namespace std;


//   Definition for a binary tree node.
  struct TreeNode {
      int val;
     TreeNode *left;
     TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 

class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int v) {
        if(root==NULL)
        return NULL;
        if(root->val==v)
        return root;

        else if(v<root->val)
        return searchBST(root->left,v);
        else if(v>root->val)
        return searchBST(root->right,v);
       
        return NULL;

    }
};