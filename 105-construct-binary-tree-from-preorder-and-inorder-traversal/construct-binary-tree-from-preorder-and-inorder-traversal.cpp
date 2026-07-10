/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* solve(vector<int>& preorder, vector<int>& inorder,int st,int en,int &idx)
    {
           if(st>en) return NULL;
           int val=preorder[idx];
           int i;
           for(i=st;i<=en;i++)
           {
             if(val==inorder[i])
             break;
           }
           idx++;
           TreeNode* root=new TreeNode(val);
           root->left=solve(preorder,inorder,st,i-1,idx);
           root->right=solve(preorder,inorder,i+1,en,idx);
           return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx=0,n=preorder.size();
        return solve(preorder,inorder,0,n-1,idx);
    }
};