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
    void help(TreeNode* root,vector<int>&ans,int lev)
    {
        if(!root) return;
        if(lev==ans.size())
        ans.push_back(root->val);
        if(root->right) help(root->right,ans,lev+1);
        if(root->left) help(root->left,ans,lev+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>ans;
        if(!root) return ans;
        help(root,ans,0);
        return ans;
    }
};