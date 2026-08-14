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
    int maxi;
    int maxS(TreeNode* root)
    {
        if(!root) return 0;
        int ls=maxS(root->left);
        int rs=maxS(root->right);
        
        int c1=root->val+ls+rs; //neeche_wala_acha
        int c2=root->val+max(ls,rs);//koi_ek_acha
        int c3=root->val;//sirf_root

        maxi=max({maxi,c1,c2,c3});
        return max(c2,c3);
    }
    int maxPathSum(TreeNode* root) {
        maxi=INT_MIN;
        maxS(root);
        return maxi;
    }
};