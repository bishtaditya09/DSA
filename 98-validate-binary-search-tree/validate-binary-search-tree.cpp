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
    bool check(TreeNode* root,long long maxi,long long mini)
    {
         if(!root) return true;
         
         if(root->val<=mini ||  root->val>=maxi)
         return false;

         return check(root->left,root->val,mini) && check(root->right,maxi,root->val);
    }
    bool isValidBST(TreeNode* root) {
        if(root) 
        {
             if(!root->left && !root->right)
             return true;
        }
        long long  maxi=LLONG_MAX,mini=LLONG_MIN;
        return check(root,maxi,mini);
    }
};