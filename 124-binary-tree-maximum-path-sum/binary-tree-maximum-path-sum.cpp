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
    int maxS(TreeNode* root,int &maxi)
    {
        if(root==NULL) return 0;
        int ls=max(0,maxS(root->left,maxi));
        int rs=max(0,maxS(root->right,maxi));
        maxi=max(maxi,root->val+ls+rs);
        return root->val+max(ls,rs);
    }
    int maxPathSum(TreeNode* root) {
        int maxi=INT_MIN;
        maxS(root,maxi);
        return maxi;
    }
};