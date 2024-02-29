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
    bool isEvenOddTree(TreeNode* root) {
        if (root->val % 2 == 0)
            return false;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        bool flag = false;
        int temp=0;
        int count = 0;
        while (q.empty() == false && q.size() > 1) {
            if (q.front() == NULL && q.size() > 1) {
                q.push(NULL);
                q.pop();
                 temp=q.front()->val;
                 count=0;
                 cout<<endl;
                continue;
            } else {
                
                if (q.front()->val % 2 == 0) {
                    
                    if(q.front()->val>=temp && count!=0)
                    return false;
                    if(q.front()->val<temp)
                    temp=q.front()->val;
                    count++;
                    if (q.front()->left != NULL) {
                    if (q.front()->left->val % 2 == 0 ){
                        cout<<"i ";
                        return false;}
                        q.push(q.front()->left);
                    }
                   
                    if (q.front()->right != NULL) {
                        if(q.front()->right->val % 2 == 0 ) {
                        return false;}
                        q.push(q.front()->right);
                    }
                } 
                
                else {
                    
                    if(q.front()->val<=temp && count!=0)
                    return false;
                    if(q.front()->val>temp)
                    temp=q.front()->val;
                    count++;
                    if (q.front()->left != NULL &&
                        q.front()->left->val % 2 != 0 ) {
                        return false;
                    }
                    if (q.front()->left != NULL){
                        q.push(q.front()->left);
                        }
                    if (q.front()->right != NULL &&
                        q.front()->right->val % 2 != 0) {
                        return false;
                    }
                    if (q.front()->right != NULL){
                        q.push(q.front()->right);
                        }
                }
            }
            q.pop();
            cout<<temp<<" ";
        }
        return true;
    }
};