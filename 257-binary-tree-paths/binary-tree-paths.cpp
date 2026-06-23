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
    bool isleaf(TreeNode* root)
    {
         if(!root->right && !root->left)
         return true;
         else 
         return false;
    }
    void getpath(TreeNode* root,vector<string>&ans,string st)
    {
         if(!root)
         return;
         st+=to_string(root->val);
         if(isleaf(root))
         ans.push_back(st);
         st+="->";
         if(root->left) getpath(root->left,ans,st);
         if(root->right) getpath(root->right,ans,st);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>ans;
        if(!root) return ans;
        string st="";
        getpath(root,ans,st);
        return ans;
    }
};